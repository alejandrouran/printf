#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* helper functions */

int _putchar(char c);

/* functions to print */

int _printf(const char *format, ...);
int print_string(va_list arg);
int print_char(va_list arg);
int print_int(va_list arg);
#endif
