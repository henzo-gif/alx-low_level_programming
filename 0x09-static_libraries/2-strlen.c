#include "main.h"
/**
 * _strlen - return length of a string
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                len++;
                s++;
        }
        return (len);
}
