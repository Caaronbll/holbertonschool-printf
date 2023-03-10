#include "main.h"
#include <stdio.h>

/**
 * printer - takes in all the arguments to correctly allocate each funtion per argument
 * @format: original formated string as an input
 * @func_list: list of function for each string listed as an argument
 * @arg_list: list of arguments
 * Return: output string.
 */

int printer(const char *format, strucstr func_list[], va_list arg_list)
{

