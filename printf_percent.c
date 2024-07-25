#include <unistd.h>
#include "main.h"

/**
* Printf_Percent - Print a percentage
* Return: Always 0
*/

int Printf_Percent(va_list args)
{
    (void)args;
    _putchar('%');
    return (1);
}
