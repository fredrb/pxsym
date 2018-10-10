#include<locale.h>
#include<run_evaluation.h>
int run_evaluation() {


	#pragma message "PXNAME lconv ! struct"
	lconv;



	#pragma message "PXNAME locale_t ! struct"
	locale_t;



	#pragma message "PXNAME LC_ALL ! constant"
	#ifdef LC_ALL
	#pragma message "PXEXIST LC_ALL !"
	// std::cout << "PXEXIST LC_ALL !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_ALL !"
	// std::cout << "PXMISSING LC_ALL !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_COLLATE ! constant"
	#ifdef LC_COLLATE
	#pragma message "PXEXIST LC_COLLATE !"
	// std::cout << "PXEXIST LC_COLLATE !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_COLLATE !"
	// std::cout << "PXMISSING LC_COLLATE !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_CTYPE ! constant"
	#ifdef LC_CTYPE
	#pragma message "PXEXIST LC_CTYPE !"
	// std::cout << "PXEXIST LC_CTYPE !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_CTYPE !"
	// std::cout << "PXMISSING LC_CTYPE !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_MESSAGES ! constant"
	#ifdef LC_MESSAGES
	#pragma message "PXEXIST LC_MESSAGES !"
	// std::cout << "PXEXIST LC_MESSAGES !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_MESSAGES !"
	// std::cout << "PXMISSING LC_MESSAGES !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_MONETARY ! constant"
	#ifdef LC_MONETARY
	#pragma message "PXEXIST LC_MONETARY !"
	// std::cout << "PXEXIST LC_MONETARY !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_MONETARY !"
	// std::cout << "PXMISSING LC_MONETARY !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_NUMERIC ! constant"
	#ifdef LC_NUMERIC
	#pragma message "PXEXIST LC_NUMERIC !"
	// std::cout << "PXEXIST LC_NUMERIC !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_NUMERIC !"
	// std::cout << "PXMISSING LC_NUMERIC !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_TIME ! constant"
	#ifdef LC_TIME
	#pragma message "PXEXIST LC_TIME !"
	// std::cout << "PXEXIST LC_TIME !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_TIME !"
	// std::cout << "PXMISSING LC_TIME !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_COLLATE_MASK ! constant"
	#ifdef LC_COLLATE_MASK
	#pragma message "PXEXIST LC_COLLATE_MASK !"
	// std::cout << "PXEXIST LC_COLLATE_MASK !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_COLLATE_MASK !"
	// std::cout << "PXMISSING LC_COLLATE_MASK !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_CTYPE_MASK ! constant"
	#ifdef LC_CTYPE_MASK
	#pragma message "PXEXIST LC_CTYPE_MASK !"
	// std::cout << "PXEXIST LC_CTYPE_MASK !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_CTYPE_MASK !"
	// std::cout << "PXMISSING LC_CTYPE_MASK !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_MESSAGES_MASK ! constant"
	#ifdef LC_MESSAGES_MASK
	#pragma message "PXEXIST LC_MESSAGES_MASK !"
	// std::cout << "PXEXIST LC_MESSAGES_MASK !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_MESSAGES_MASK !"
	// std::cout << "PXMISSING LC_MESSAGES_MASK !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_MONETARY_MASK ! constant"
	#ifdef LC_MONETARY_MASK
	#pragma message "PXEXIST LC_MONETARY_MASK !"
	// std::cout << "PXEXIST LC_MONETARY_MASK !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_MONETARY_MASK !"
	// std::cout << "PXMISSING LC_MONETARY_MASK !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_NUMERIC_MASK ! constant"
	#ifdef LC_NUMERIC_MASK
	#pragma message "PXEXIST LC_NUMERIC_MASK !"
	// std::cout << "PXEXIST LC_NUMERIC_MASK !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_NUMERIC_MASK !"
	// std::cout << "PXMISSING LC_NUMERIC_MASK !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_TIME_MASK ! constant"
	#ifdef LC_TIME_MASK
	#pragma message "PXEXIST LC_TIME_MASK !"
	// std::cout << "PXEXIST LC_TIME_MASK !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_TIME_MASK !"
	// std::cout << "PXMISSING LC_TIME_MASK !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_ALL_MASK ! constant"
	#ifdef LC_ALL_MASK
	#pragma message "PXEXIST LC_ALL_MASK !"
	// std::cout << "PXEXIST LC_ALL_MASK !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_ALL_MASK !"
	// std::cout << "PXMISSING LC_ALL_MASK !" << std::endl;
	#endif 




	#pragma message "PXNAME LC_GLOBAL_LOCALE ! constant"
	#ifdef LC_GLOBAL_LOCALE
	#pragma message "PXEXIST LC_GLOBAL_LOCALE !"
	// std::cout << "PXEXIST LC_GLOBAL_LOCALE !" << std::endl;
	#else 
	#pragma message "PXMISSING LC_GLOBAL_LOCALE !"
	// std::cout << "PXMISSING LC_GLOBAL_LOCALE !" << std::endl;
	#endif 




	#pragma message "PXNAME duplocale ! function"
	duplocale;



	#pragma message "PXNAME freelocale ! function"
	freelocale;



	#pragma message "PXNAME localeconv ! function"
	localeconv;



	#pragma message "PXNAME newlocale ! function"
	newlocale;



	#pragma message "PXNAME setlocale ! function"
	setlocale;



	#pragma message "PXNAME uselocale ! function"
	uselocale;

	return 0;
}
