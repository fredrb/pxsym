#ifndef RUN_EVALUATION_H
#define RUN_EVALUATION_H

typedef struct {
	char* symbolCategory;	// aio.h, stdlib.h
	char* symbolType;			// function, constant
	char* symbolName;			// _POSIX_VERSION, pthread_create 
	bool isPresent;				// true or false
} symbol_evaluation;

int run_evaluation();

#endif
