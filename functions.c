#include "main.h"

int print_character(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints the string
 * @list: argument list
 * Return: characters printed
 */

int print_string(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

