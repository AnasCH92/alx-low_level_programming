#include "main.h"
/**
 *	 _puts_recursion("Puts with recursion");
 *	 return (0);
 */

void _puts_recursion(char *a)
{
	if(*(a) != '\0')
	{
		_putchar(*a);
		_put_recursion(a+1);
	}
	if (*(a) == '\0')
	{
		_putchar('\n');
	}
}
