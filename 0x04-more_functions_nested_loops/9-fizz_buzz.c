#include <stdio.h>

/**
 * main - print the numbers from 1 to 100,
 * followed ny a new line
 * but for multiples of three print Fizz instaead of the number
 * for multiple of five print Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			_putchar(' ');
		else
			_putchar('\n');
	}
}
