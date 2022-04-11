#include <stdio.h>
/**
 * main - Entry point
 * Descr: Print alphabets exc e nd q
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c!= 'q')
		{
			putchar(c);
		}
		c++;

	}

	putchar('\n');
	return (0);
}
