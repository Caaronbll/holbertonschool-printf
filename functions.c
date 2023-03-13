#include "main.h"

/**
 * print_character - Prints a single character
 * @list: va_list
 *
 * Return: Number of characters printed (always 1)
 */
int print_character(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @list: argument list
 *
 * Return: Number of characters printed
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

/**
 * print_percent - Prints a literal percentage
 * @list: Argument list (unused)
 *
 * Return: Number of characters printed (always 1)
 */
int print_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}
