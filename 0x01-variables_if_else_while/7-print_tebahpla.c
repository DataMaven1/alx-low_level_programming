#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that print lowercase alphabet
 * in reverse order, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c--;
	}

	putchar ('\n');
	return (0);
}
