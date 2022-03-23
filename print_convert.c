#include "main.h"

/**
 * print_convert - format specifier
 * @c: formar specifier
 *
 * Return: void
 */
int (*print_convert(char c))(va_list)
{
	print_t a[] = {

		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{'\0', NULL}

	};

	int i;

	for (i = 0; a[i].c != '\0'; i++)

		if (c == a[i].c)

			break;

	return (a[i].f);
}
