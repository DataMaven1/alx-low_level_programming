#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: string
 *
 * Return: pointer to newely allocated space in memory
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	strout = malloc(sizeof(char) * i);

	if (strout == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		strout[j] = str[j];

	return (strout);
}
