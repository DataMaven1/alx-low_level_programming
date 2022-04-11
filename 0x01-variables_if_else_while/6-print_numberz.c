#include <stdio.h>
/**
 * main - Entry point
 * Descrition: a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
