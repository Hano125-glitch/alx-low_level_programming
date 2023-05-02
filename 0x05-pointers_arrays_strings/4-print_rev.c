#include "main.h"

/**
 * print_rev - print a reverse string
 * @s: string
 *
 * Return: A reverse string
 */
void print_rev(char *s)
{
	int a;
	int i;

	a = 0;
	while (s[a] != '\0')
	a++;
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

