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
	_putchar(format[i]);
	_putchar(format[i + 1]);
	return (2);

}
