#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description:  prints all single digit numbers of base 10
 * starting from 0, followed ny a new line
 * Return: Always 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar ('\n');
	return (0);
}
