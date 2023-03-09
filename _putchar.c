#include <unistd.h>

/**
 * _putchar - writes a character set
 *  @c: character
 *  Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
