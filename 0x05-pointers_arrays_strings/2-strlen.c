#include "main.h"
/**
 * _strlen - count the lenght of a string
 * @s: string
 * Return: the value of lenght i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
