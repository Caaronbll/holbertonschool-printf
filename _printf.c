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
	int pf_out;
	
	if (!format)
		return (-1);

	spec_tr functions[] = {
		{"s", print_string},
		{"c", print_character},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list arguments;

	va_start(arguments, format);
	pf_out = sorter(format, functions, arguments);
	va_end(arguments);
	return (pf_out);
}
