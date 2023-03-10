#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct spectr - a structure used to hold the functions allocated to
 * each symbol
 * @letter: symbol used as an argument
 * @f: function pointer for each function allocated for each symbol
 *
 * Return: void
 */
typedef struct spectr
{
	char *letter;
	int (*f)(va_list);
} spec_tr;

/* Prototypes */
int _printf(const char *format, ...);
int printer(const char *format, spec_tr functions[], va_list arguments);
int _putchar(char c);
int print_character(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int sorter(const char *format, spec_tr functions[], va_list arguments);
int print_int(va_list list);
int print_number(va_list args);
#endif
