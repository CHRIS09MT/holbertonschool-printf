#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct printf_convert - Match the conversion specifiers for printf
* @type: The conversion specifier
* @func: The function to call for each conversion specifier
*/

typedef struct printf_convert
{
	const char *type;
	int (*func)(va_list);
} convert;

int Printf_Unknown(const char *format, int i);
int _printf(const char *format, ...);
int _putchar(char c);

int Printf_Int(va_list args);
int Printf_String(va_list args);
int Printf_Percent(va_list args);
int Printf_Char(va_list args);


#endif
