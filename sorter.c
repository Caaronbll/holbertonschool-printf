#include "main.h"

/**
 * sorter - sorts the strings to me printed correctly
 * @format: the input string
 * @functions: all the possible functions
 * @arguments: all the input arguments
 * Return: total count of characters
 */

int sorter(const char *format, specs_tr functions[], va_list arguments)
{
	int count = 0;

	for (int i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (int j = 0; functions[j].letter
