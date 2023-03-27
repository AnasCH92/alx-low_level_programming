#include "main.h"
#include <stdio.h>

/**
  * main - check the code
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while(*y != '\0')
	{
		y++;
		longi++;

	}
	t = longi -1;
	for (o = 0 ; 0 <= t ; o++)
	{ 
		if (0 % 2==0)
		{
		_putchar(str[0]);
		}
	}	
	_putchar('\n');
}	
