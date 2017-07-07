/*
*	Description:
*
*	Author: Gerardo Carmona
*   
*/

#define TYPE_A

#if defined(TYPE_A)
	#include "typeA.h"
#endif

#if defined(TYPE_B)
	#include "typeB.h"
#endif

#include  <iostream>

int main(){
	std::cout << "Hello world! \n";
}