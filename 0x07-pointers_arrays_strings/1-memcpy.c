#include "main.h"
/**
 * _memcpy - copies bytes from memry area src to memory area dest
 * @dest: destination area memory
 * @src: source memory area
 * @n: data
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
