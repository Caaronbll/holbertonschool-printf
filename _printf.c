#include "main.h"
#include <stdio.h>
#include <stdarg.h>


/* _printf - Recieves the main string and all parameters to print
 *  a formatted string.
 *  It returns an integer and takes a first parameter of a pointer to a constant character an
 *  d a number of following parameters
 *  If you happen to pass in more parameters than are required by the format string you pass
 *  in, then the extra parameters are ignored
 *
 *
 * */
int _printf(const char *format, ...)
{
	int pf_out;

	if (!format)
		return();

	strucstr func_list[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	
	va_list arg_list;
	va_start(arg_list, format);
	pf_out = printer(format, func_list[], arg_list);

	va_end(arg_list);
	return(pf_out);
}
