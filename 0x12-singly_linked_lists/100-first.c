#include "lists.h"

/**
 * myFunction - aplly the constructor
 */

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myFunction - implementation of myfunction
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
