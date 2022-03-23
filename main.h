#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* Funciones auxiliares */

int _putchar(char c);

/* Funciones para imprimir */

int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);

#endif
