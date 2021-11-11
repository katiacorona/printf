#include "main.h"

/**
 * _printf - prints formatted output
 * @format: a pointer to a string to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...) /** betty-style error por funcion
				      * con mas de 40 lineas. Reducir.
				      */
{
	int posicion, conteo_letras = 0, conteo_args = 0;
	va_list opcionales_args;

	if (format == NULL)
	{
		return (-1);
	}
	for (posicion = 0; format[posicion] != '\0'; posicion++)
	{
		if (format[posicion] == '%')
		{
			conteo_args++;
		}
	}
	/**
	 * La siguiente línea manda un warning al compilar por no usar
	 * last name en los argumentos, pero el programa compila.
	 */
	va_start(opcionales_args, format);
	for (posicion = 0; format[posicion] != '\0'; posicion++)
	{
		if (format[posicion] != '%')
		{
			_putchar(format[posicion]);
			conteo_letras++;
		}
		else
		{
			switch (format[posicion + 1])
			{
				case 'c':
					_putchar(va_arg(opcionales_args, int));
					break;
				/**case 's':
				 * while ()
				 * break;
				 */
				case '%':
					_putchar('%');
					break;
				default:
					return (-1);
			}
			conteo_letras++;
			posicion++;
		}
	}
	va_end(opcionales_args);
	return (conteo_letras++);
}
