#include "main.h"

/**
 * print_int - print i and d
 * @arg: va_list
 * Return: int
 */
int print_int(va_list arg)
{
	unsigned int n;
	int i, d, l;

	i = va_arg(arg, int);
	d = 1;
	l = 0;

	if (i < 0)
	{
		l = l + _putchar('-');
		n = i * -1;
	}
	else
	{
		n = i;
	}
	while (n / d > 9)

		d = d * 10;

	while (d != 0)
	{
		l = l + _putchar('0' + n / d);

		n = n % d;
		d = d / 10;
	}
	return (l);
}
