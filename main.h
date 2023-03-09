#ifndef MAIN_H
#define MAIN_H
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

struct spec_sym
{
	char *sym
	int (*f)(va_list);
};

typedef struct spec_sym symbol;




#endif
