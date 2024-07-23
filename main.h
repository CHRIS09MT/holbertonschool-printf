#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);

int Printf_Percent(void);
int Printf_Char(va_list args);
int Printf_String(va_list args);

#endif
