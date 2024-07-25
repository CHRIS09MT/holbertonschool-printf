#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * Printf_Char - Print a character
 * @args: The arguments
 * Return: Always 1
 */

int Printf_Char(va_list(args))
{
    char c = va_arg(args, int);
    _putchar(c);
    return (1);
}
