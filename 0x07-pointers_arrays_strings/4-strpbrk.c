#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the bytes of s
*/

char *_strpbrk(char *s, char *accept)
{
int a, b;
char *p;

a = 0;
while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (accept[b] == s[a])
{
p = &s[a];
return (p);
}
b++;
}
a++;
}
return (0);
}
