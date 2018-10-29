#include<ulimit.h>
#include<run_evaluation.h>
int run_evaluation() {


	#pragma message "PXNAME UL_GETFSIZE ! constant"
	#ifdef UL_GETFSIZE
	#pragma message "PXEXIST UL_GETFSIZE !"
	// std::cout << "PXEXIST UL_GETFSIZE !" << std::endl;
	#else 
	#pragma message "PXMISSING UL_GETFSIZE !"
	// std::cout << "PXMISSING UL_GETFSIZE !" << std::endl;
	#endif 




	#pragma message "PXNAME UL_SETFSIZE ! constant"
	#ifdef UL_SETFSIZE
	#pragma message "PXEXIST UL_SETFSIZE !"
	// std::cout << "PXEXIST UL_SETFSIZE !" << std::endl;
	#else 
	#pragma message "PXMISSING UL_SETFSIZE !"
	// std::cout << "PXMISSING UL_SETFSIZE !" << std::endl;
	#endif 




	#pragma message "PXNAME ulimit ! function"
	ulimit;

	return 0;
}
