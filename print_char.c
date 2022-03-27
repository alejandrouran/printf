#include "main.h"

/**
 * print_char - print c
 * @arg: va_list
 * Return: char
 */
int print_char(va_list arg)
{
	char i = va_arg(arg, int);

	_putchar(i);

	return (1);
}
