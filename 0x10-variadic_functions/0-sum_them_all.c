#include "variac_functions.h"

/**
  * sum_them_all - ...
  * @n:
  *
  * Return: 
  */
int sum_them_all(const unsigned int a, ...)
{
	va_list args;
	unsigned int b = 0;
	int sum = 0;

	if (a != 0)
	{
		va_start(args, a);

		while (b < a)
		{
			sum += va_arg(args, int);
			a++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
