#include "main.h"
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	types convert[] = {
		{"%c", Printf_Char}, {"%s", Printf_String}, {"%%", Printf_Percent},
		{NULL, NULL}
	};
	va_list func;
}
