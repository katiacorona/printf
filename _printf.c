#include "main.h"

/**
 * _printf - prints formatted output
 * @format: a pointer to a string to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int posicion = 0;
	int conteo_letras = 0;
	//int conteo_args = 0;
	//va_list opcionales_args;

	//va_start(opcionales_args, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (posicion = 0; format[posicion] != '\0'; posicion++)
	{
		if (format[posicion] != '%')
		{
			_putchar(format[posicion]);
			conteo_letras++;
		}
	}
	//va_end(opcionales_args);
	return (conteo_letras++);
}
