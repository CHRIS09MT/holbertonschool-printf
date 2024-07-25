#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

/**
* Printf_Int - Print a number of 12 digits
* @args: Variable arguments list
* Return: Return length of string
*/

int Printf_Int(va_list args)
{
	int num = va_arg(args, int);
	int lenght = 0, digits[12];
	int a = 0, b;

	if (num < INT_MIN || num > INT_MAX)
		return (-1);

	if (num == INT_MIN)
	{
		char int_min_str[] = "-2147483648";

		for (b = 0; int_min_str[b] != '\0'; b++)
			_putchar(int_min_str[b]);
		return (b);
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		lenght++;
	}
	while (num != 0)
	{
		digits[a++] = num % 10;
		num /= 10;
	}
	lenght += a;

	for (b = a - 1; b >= 0; b--)
		_putchar(digits[b] + '0');
	return (lenght);
}
