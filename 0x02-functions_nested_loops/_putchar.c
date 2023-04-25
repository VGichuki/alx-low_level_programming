#include <unistd.h>

/**
 * putchar - writes the character c
 *
 * Return: on sucess 1
 * On error -1 is returned
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
