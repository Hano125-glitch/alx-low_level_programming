#include<stdio.h>
#include<unistd.h>
/**
 * main - prints _putchar
 * Return: Always 0.
 */
int main(void)
{
char str[] = "_putchar\n";
int len = sizeof(str) / sizeof(str[0]);
write(STDOUT_FILENO, str, len);
return (0);
}
