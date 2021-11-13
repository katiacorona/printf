#include "main.h"

/**
 * _printf - print arguments according to a format
 * @format: a string composed of ordinary characters and format specifications
 *
 * Return: Upon success, this returns the number of characters printed.
 * If an output error is encountered, -1 is returned instead.
 */
int _printf(const char *format, ...)
{
va_list arguments;
int (*print_func)(va_list);
int charCount, lastVal;

if (!format)
return (-1);

va_start(arguments, format);
for (charCount = 0; *format; ++format)
{
if (*format == '%')
{
if (!format[1])
return (-1);

print_func = get_print_func(format[1]);
if (print_func)
{
lastVal = print_func(arguments);
if (lastVal < 0)
return (-1);
charCount += lastVal;
++format;
continue;
}
lastVal = _putchar(*format++);
if (lastVal < 0)
return (-1);
charCount += lastVal;
}
lastVal = _putchar(*format);
if (lastVal < 0)
return (-1);
charCount += lastVal;
}
va_end(arguments);
return (charCount);
}
