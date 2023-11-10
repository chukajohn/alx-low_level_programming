#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_op_func - select the correct functon to perform
 *@s: the operator passed as an argument
 *
 *Return: a  pointer to the function corresponding to the operator
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
};
	int i = 0;

	while ((ops[i]_op) != NULL && *(ops[i]_op) != *s)
		i++;
		return (ops[i].f);
}
