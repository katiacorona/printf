# C - printf :vulcan_salute:

# _printf

Emulates the `printf` function (standard library). The project is part of the [Holberton School](https://www.holbertonschool.com/) program.

## Description

`_printf` is a custom C language function that writes formatted output to the standard output.

## Examples

- **Printing Characters:**
Input: `_printf("%H is for Holberton\n", 'H');`
Output: `H is for Holberton`

- **Printing Strings:**
Input: `_printf("Anyone who has never made a mistake has never tried anything new")`
Output: `Anyone who has never made a mistake has never tried anything new`

- **Printing an escaped % character:**
Input: `_printf("Special Offer, Up to 50%% Discount")`
Output: `Special Offer, Up to 50% Discount`

## File Contents

- ***_print.c*** - includes function definition for `_printf()`, a variadic function containing zero or more directives. Emulates `printf()` returning the number of characters printed (excluding the terminated NULL byte), and writes output to the standard output.

- ***_putchar.c*** - includes de function for [`_putchar()`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) that writes a character to the standard output.

- ***main.h*** - contains all function prototypes used to run the `_printf()` function.

- ***man_3_printf*** - manual page for the C function `_printf()`.

## Authors

Silvia Natalia Heredia López, Katia Corona Tarango, César Ogir Guzmán López.
