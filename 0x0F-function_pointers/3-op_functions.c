#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - a function tha returns the sum of a numbers
 *@a: first number
 *@b: second number
 *Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - returns the difference of teo number
 *@a: first number
 *@b: second number
 *Return: differenc of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mui - returns the multiplication of 2 numbers
 *@a: first number
 *@b: second number
 *Return: mutiplication of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns value of divided numbers
 *@a: first number
 *@b: second number
 *Return: value of divided numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - returns the modula of two numbers
 *@a: first number
 *@b: second number
 *Return: the remiander of teo numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
