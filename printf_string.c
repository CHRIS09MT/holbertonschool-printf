#include <stdarg.h>
#include "main.h"

/**
* Printf_String - Prints a string
* @args: va_list of arguments
* Return: Number of characters printed
*/

int Printf_String(va_list args)
{
	char *str = va_arg(args, char *);
	int cant = 0;

	if (str == NULL)
	{
		str = "(null)";

		while (*str)
		{
			_putchar(*str);
			cant++;
			str++;
		}

		return (cant);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		cant++;
		str++;
	}
	return (cant);
}