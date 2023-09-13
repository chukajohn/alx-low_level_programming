#include "calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function returns the sum of numbers
 * @a: the first number
 * @b: second number
 * Return: the sum of a and b
 */

int op_add(int a. int b)
{
	return (a + b);
}

/**
 * op_sub - a function returns the sub of numbers
 * @a: the first number
 * @b: second number
 * Return: the sub of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function returns the multipilcation of numbers
 * @a: the first number
 * @b: second number
 * Return: the mutiply of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function returns the division of numbers
 * @a: the first number
 * @b: second number
 * Return: the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - a function returns the remainder of division of numbers
 * @a: the first number
 * @b: second number
 * Return: the remainder of  division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
