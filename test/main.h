#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* Funciones auxiliares */

char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _putchar(char c);

/* Funciones de impresion */

int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);

#endif
