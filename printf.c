#include "main.h"
#include <stdarg.h>
/**
* _printf - Function that produces output according to a format.
* @format: The format string
* Return: The formatted string
*/
int _printf(const char *format, ...)
{
	convert types[] = {
		{"%c", Printf_Char}, {"%%", Printf_Percent},
		{"%s", Printf_String}, {NULL, NULL}
	};

	va_list ap;
	int a = 0, b = 0, cant = 0;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[a] != '\0')
	{
		if (format[a] == '%' && format[a + 1] != '\0')
		{
			b = 0;
			while (types[b].type)
			{
				if (format[a + 1] == types[b].type[1])
				{
					cant = cant + types[b].func(ap);
break;
				}
				b++;
			}
			if (types[b].type == NULL && format[a + 1] != '\0')
				cant += Printf_Unknown(format, a);
			a++;
		} else
		{
			_putchar(format[a]);
cant++;
		}
		a++;
	}
	va_end(ap);
	return (cant);
}
