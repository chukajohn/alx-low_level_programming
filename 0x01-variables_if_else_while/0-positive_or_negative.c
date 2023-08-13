#include <stdio.h>
#include <time.h>
/**
 * main - to know if a random number is positive, negative or zero.
 *
 * Return: 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* the code goes here*/

	if (n < 0)

		printf("%d is negative", n);

	else if (n > 0)

		printf("%d is positive", n);

	else

		printf("%d is zero", n);
		printf("\n");
	return (0);
}
