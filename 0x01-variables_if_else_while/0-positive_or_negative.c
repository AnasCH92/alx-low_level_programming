#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

/**
 * main - test code
 *
 * Return : 0(Success)
 */

int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d" , n);

	if (n > )
	{
		puts (" is positive ");
	}
	else if ( n== )
	{
		puts(" negative ");
	}
	return(0);

}
