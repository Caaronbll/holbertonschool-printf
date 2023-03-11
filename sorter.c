#include "main.h"

/**
 * sorter - sorts the strings to me printed correctly
 * @format: the input string
 * @functions: all the possible functions
 * @arguments: all the input arguments
 * Return: total count of characters
 */

int sorter(const char *format, spectr_t functions[], va_list arguments)
{
	int count = 0;

	for (int i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (int j = 0; functions[j].letter; j++)
			{
				if (format[i + 1] == functions[j].letter[0])
				{
					marker = functions[j].f(arguments);
					if (marker == -1)
						return (-1);
					count = count + marker;
					break;
				}
			}
			if (!functions[j].letter && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
