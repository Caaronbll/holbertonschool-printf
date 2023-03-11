#include "main.h"

int print_character(va_list list)
{
	putchar(va_arg(list, int));
	return (1);
}

int print_string(va_list list)
{

