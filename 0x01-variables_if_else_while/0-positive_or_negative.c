#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * declear variable n
 * assign random value for n
 * set loop conditions and print statements
 *
 * return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	    printf("%d is positive\n", n);
	else if (n == 0)
	    printf("%d is zero\n", n);
	else
	    printf("%d is negative\n", n);
	return (0);
}
