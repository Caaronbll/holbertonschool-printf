#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/* specstr - a structure used to hold the functions allocated to each symbol
 * @symbol: symbol used as an argument
 * @f: function pointer for each function allocated for each symbol
 * Return: nothing
 */

typedef struct specstr
{
	char *symbol
	int (*f)(va_list);
};





#endif
