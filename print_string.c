#include "main.h"

/**
 * print_string - print s
 * @arg: va_list
 * Return: string
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i = 0;

	if (s == NULL)

		s = "(null)";

	for (; s[i]; i++)

		_putchar(s[i]);

	return (i);
}
