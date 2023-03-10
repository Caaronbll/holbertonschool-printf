#include "main.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * _printf - Recieves the main string and all parameters to print
 *  a formatted string.
 *  @format: selected string to print as the output.
 *  Return: Printed string.
 */

int _printf(const char *format, ...)
{
	int pf_out;

	spec_tr functions[] = {
		{"s", print_string},
		{"c", print_character},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	va_list arguments;

	if (!format)
		return (-1);
	va_start(arguments, format);
	pf_out = sorter(format, functions, arguments);
	va_end(arguments);
	return (pf_out);
}
