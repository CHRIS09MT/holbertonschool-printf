#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * Printf_String - This function print a string
 * @args: The print arguments
 * Return: Print the amount of characters the string
 */

int Printf_String(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";

		while (str[count])
		{
			_putchar(str[count]);
			count++;
		}
		return (6);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
