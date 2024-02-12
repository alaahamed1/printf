#include "main.h"

/**
 * _put - Outputs a string to the standard output.
 * @str: The string to put into the output buffer.
 * Return: The length of the string.
 */
int _put(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		len += _putchar(*str++);
	}
	return (len);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
