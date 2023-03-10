#include "main.h"
#include <stdio.h>
#include <stdarg.h>


/* _printf - Recieves the main string and all parameters to print
 *  a formatted string.
 *  @format: selected string to print as the output.
 *  Return: Printed string.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	const char *p = format;

	va_list args;
	va_start(args, format);

	while(*p)
	{
		if(*p == '%')
		{
			p++;
			if(*p == 'c')
			{
				//do code for the character
			}
			else if (*p == 's')
			{
				//do code for string
			}
			else if (*p == '%')
			{
				//do code for percent sign
			}
		}
	_putchar(p);
	p++;	
}
