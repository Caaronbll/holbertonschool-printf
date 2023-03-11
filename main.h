#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* specstr - a structure used to hold the functions allocated to each symbol
 * @letter: symbol used as an argument
 * @f: function pointer for each function allocated for each symbol
 * Return: nothing
 */

typedef struct spectr
{
	char *letter;
	int (*f)(va_list);
} spectr_t;

/*prototypes*/

int _printf(const char *format, ...);
int printer(const char *format, spec_tr functions[], va_list arguments);

#endif
