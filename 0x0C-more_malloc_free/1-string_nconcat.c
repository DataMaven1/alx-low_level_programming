#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, a = 0;
	char *c;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	if (j > n)
		j = n;

	c = malloc ((sizeof(char) * i) + (sizeof(char) * j) +1);

	if (c = NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		c[a] = *s1;
		s1++;
		a++;
	}

	while (a < j + i)
	{
		c[a] = *s2;
		s2++;
		a++;
	}
	c[i + j] = '\0';

	return (c);
}
