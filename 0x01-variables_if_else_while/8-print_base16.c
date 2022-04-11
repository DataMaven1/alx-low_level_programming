#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Descrition: print all number in base 16
 * in lowercase followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	d = 'a';

	while (d <= 'f')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}
