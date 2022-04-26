#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - locate the first occurence in the string
 * @s: string
 * @accept: string
 *
 * Return: Null
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (*(accept + j) == s[j])
				return (&(s[i]));
	}
	return (NULL);
}
