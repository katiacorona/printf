#include <unistd.h>

/**
 * _write - writes character c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error -1 is returned
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
