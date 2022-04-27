#include "main.h"
#include <stdio.h>
/**
 * print_to_98- print all antural numbers from input to 98
 * in order sepearyted by a comma followed by a space
 * @n: the number to begin counting at
 * Return: void return nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
