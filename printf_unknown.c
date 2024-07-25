#include "main.h"
#include <unistd.h>

/**
* Printf_Unknown - prints unknown format specifiers
* @format: The format string
* @i: The index of the current character in the format string
* Return: 0
*/

int Printf_Unknown(const char *format, int i)
{
	/**
	*if (format[i] == '\0')
	*	return 0;
	*
	*_putchar(format[i]);
	*
	*if (format[i] == '%' && format[i + 1] != '\0')
	*{
	*	_putchar(format[i + 1]);
	*	return (Printf_Unknown(format, i + 2));
    *}
	*
	*return (Printf_Unknown(format, i + 1));
	*/
	_putchar(format[i]);
	_putchar(format[i + 1]);
	return (2);

}
