#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 */

int Printf_Int(va_list args)
{
	int num = va_arg(args, int);

	int temp = num, len3 = 0, dig[12];
	int a = 0, b;

	if (num == INT_MAX)
	{
		char int_min_str[] = "-2147483648";

		for (num = 0; num < int_min_str; num++)
	}

	if (num == 0)
	{
		_putchar(num + '0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	while (num > 0)
	{
		
	}
}
