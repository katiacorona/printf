#include "main.h"

/**
 * print_c - print a character
 * @args: the va_list with the character to print as it's next element
 * Return: the number of bytes printed
 */

int print_c(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
