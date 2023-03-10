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
		return(-1);

	strucstr func_list[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	
	va_list arg_list;
	va_start(arg_list, format);
	pf_out = printer(format, func_list, arg_list);

	va_end(arg_list);
	return(pf_out);
}
