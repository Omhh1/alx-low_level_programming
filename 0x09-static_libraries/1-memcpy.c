#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: momory area
 * @src: source
 * @n: length of src to be copied
 * Return: pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
