#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			if ((!(a == b)) && a < b)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (!(a == 8 && b == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}

	putchar('\n');
	return (0);
}

