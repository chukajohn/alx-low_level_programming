#include "main.h"
#include <stdio.h>
/**
* times_table - a function that prints the 9 times table, starting with 0
*
* Return: always 0 when sucessful
*/

void times_table(void)
{
	int i, j, outcome;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
	{
		outcome = i * j;
		printf("%d", outcome);
	}
	}
	printf("\n");
}
