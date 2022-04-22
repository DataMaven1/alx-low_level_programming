#include "main.h"

/**
 * swap_int - swap numbers functions
 * @a: interger
 * @b: integregr
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
