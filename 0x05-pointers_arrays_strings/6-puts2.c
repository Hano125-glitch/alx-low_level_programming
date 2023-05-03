#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int ii = 0;
	int i;
	int t = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		ii++;
	}
	t = ii - 1;
	for (i = 0 ; i <= t ; i++)
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
