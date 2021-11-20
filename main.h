#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_func - map a print function to a conversion specifier
 * @specifier: the conversion specifier
 * @f: the function to call to format and print output
 */
typedef struct print_func
{
char specifier;
int (*f)(va_list);
} t_print_func;

int _printf(const char *format, ...);

int (*get_print_func(char c))(va_list);

int print_c(va_list);

int print_s(va_list);

int print_prcnt(va_list);

int print_i(va_list);
void _print_i(int, int *count);


int print_r(va_list);
void _print_r(char *s, int *count);

int _putchar(int c);

#endif /* MAIN_H */
