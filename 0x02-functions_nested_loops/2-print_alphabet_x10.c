#include "main.h"

/**
  print_alphabet_x10 - print all alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i,char;
	for (int i = 1 ; i < 10 ;i++){  
	for (char = 'a'; char <= 'z'; char++)
		_putchar(char);
	_putchar('\n');
}
}
