#!/usr/bin/env python3

import os
import json

config_folder = 'configuration/header'
out_folder = 'out'
evaluation_header = 'run_evaluation.h'

class Generator:
	def __init__(self, path, config):
		if not os.path.exists(path):
			os.mkdir(path)
		self.file = open('%s/evaluation.cpp' %(path), 'w+')
		self.config = config

	def parse_include_header(self):
		if 'folder' in self.config.keys():
			return '%s/%s' %(self.config['folder'], self.config['name'])
		return self.config['name']

	def write_file_header(self):
		self.file.write('#include<%s>\n' %(self.parse_include_header()))	
		self.file.write('#include<%s>\n' %(evaluation_header))

	def write_file_content(self):
		self.file.write('int run_evaluation() {\n')
		for symbol in self.config['definitions']:
			self.write_symbol(symbol)
		self.file.write('}\n')

	def write_print(self, message):
		self.file.write('\tstd::cout << "%s" << std::endl\n' %(message))

	def write_pragma(self, message):
		self.file.write('\t#pragma message "%s"\n' %(message))

	def write_symbol(self, symbol):
		self.file.write('\n\n')
		self.write_pragma('%s %s !' %('PXNAME', symbol['name']))
		self.file.write('\t#ifdef %s\n' %(symbol['name']))
		self.write_pragma('%s %s !' %('PXEXIST', symbol['name']))
		self.write_print('%s %s !' %('PXEXIST', symbol['name']))
		self.file.write('\t#else \n')
		self.write_pragma('%s %s !' %('PXMISSING', symbol['name']))
		self.write_print('%s %s !' %('PXMISSING', symbol['name']))
		self.file.write('\t#endif \n')

		self.file.write('\n\n')

	def run(self):
		self.write_file_header()	
		self.write_file_content()
		return self

	def finish(self):
		self.file.close()

class PXGen:
	def __init__(self, f, config):
		self.folder = f
		self.px_config = config

	def make_folder_path(self, header):
		path = ''
		if 'folder' in header.keys():
			path = '%s_' %(header['folder'])
		return '%s/%s%s' %(out_folder, path, header['name'])

	def make_path(self, header):
		path = out_folder
		if 'folder' in header.keys():
			path = '%s/%s' %(path, header['folder'])
			if not os.path.exists(path):
				os.mkdir(path)
		return '%s/%s' %(path, header['name'])

	def generate(self):
		for header_file in os.listdir(self.folder):
			header = json.loads(open('%s/%s' %(self.folder, header_file)).read())
			#path = self.make_path(header)
			path = self.make_folder_path(header)
			print('Path: %s' %(path))
			Generator(path, header).run().finish()
			
			

if __name__ == '__main__':
	if not os.path.exists(config_folder):
		print('Unable to find config folder %s\nCheck if you\'re running pxgen.py from root folder.' %(config_folder))
	else:
		print('Opening config folder: %s' %(config_folder))
		PXGen(config_folder, []).generate()
			
