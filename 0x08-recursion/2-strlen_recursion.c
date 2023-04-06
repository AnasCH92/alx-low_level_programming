#include <main.h>
/**
 * _strlen_recursion - Main Entry
 * @s : input
 * always return 0
 */

int _strlen_recursion(char *a)
{
	if(*a != '\0')
	{
		return (1 + _strlen_recursion(a+1));
	}
	return(0);
}
