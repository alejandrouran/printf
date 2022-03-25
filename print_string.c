#include "main.h"

/**
 * print_string - print s
 * @arg: va_list
 * Return: string
 */
int print_string(va_list arg)
{
	char *s;
	int i = 0;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (; *s; s++)
	{
		putchar(*s);
		i++;
	}
	return (i);
}
