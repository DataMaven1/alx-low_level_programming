#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Descr: prints all possible different combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be differen
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * U can only use outchar once( no printf,puts)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: Always 0
 */
int main()
{
	int a = 0;
	int b;
	int c;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (!(a == b || b == c || a == c) && (a < b && b < c))
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}

	return (0);
}
