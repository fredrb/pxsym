# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fredrb/workspace/pxsym/wrapper/includeos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fredrb/workspace/pxsym/wrapper/includeos/build

# Utility rule file for pruned_elf_symbols.

# Include the progress variables for this target.
include CMakeFiles/pruned_elf_symbols.dir/progress.make

CMakeFiles/pruned_elf_symbols: posix_eval
	/home/fredrb/app/IncludeOS/includeos/bin/elf_syms posix_eval
	/usr/bin/objcopy --update-section .elf_symbols=_elf_symbols.bin posix_eval posix_eval
	/usr/bin/strip --strip-all posix_eval

pruned_elf_symbols: CMakeFiles/pruned_elf_symbols
pruned_elf_symbols: CMakeFiles/pruned_elf_symbols.dir/build.make

.PHONY : pruned_elf_symbols

# Rule to build all files generated by this target.
CMakeFiles/pruned_elf_symbols.dir/build: pruned_elf_symbols

.PHONY : CMakeFiles/pruned_elf_symbols.dir/build

CMakeFiles/pruned_elf_symbols.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pruned_elf_symbols.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pruned_elf_symbols.dir/clean

CMakeFiles/pruned_elf_symbols.dir/depend:
	cd /home/fredrb/workspace/pxsym/wrapper/includeos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fredrb/workspace/pxsym/wrapper/includeos /home/fredrb/workspace/pxsym/wrapper/includeos /home/fredrb/workspace/pxsym/wrapper/includeos/build /home/fredrb/workspace/pxsym/wrapper/includeos/build /home/fredrb/workspace/pxsym/wrapper/includeos/build/CMakeFiles/pruned_elf_symbols.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pruned_elf_symbols.dir/depend

