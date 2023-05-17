#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of a string
 * @s : char
 * Description: this will return the length of a string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
