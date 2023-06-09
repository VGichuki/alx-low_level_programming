#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
