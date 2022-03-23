#include <stdio.h>
#include "main.h"

char *print_s(va_list list)
{
	char *s;
	char *p;
	int len;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(void)";
	}

	if (p == NULL)
	{
		return (NULL);
	}

	len = 0;

	p = malloc(sizeof(char) * len + 1);

	while (s[len] != '\0')
	{
		p[len] = s[len];
		len++;
	}

	return (p);
}
