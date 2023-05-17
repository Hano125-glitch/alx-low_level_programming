#include "main.h"

/**
 * _puts - print a string
 * @str: chaine
 * Description: write a function that print a string
 * Return: 0 is success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
