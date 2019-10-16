#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strdup - copies string to allocated space
 * @str: input string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
        int str_size;
	char *array_offset;
        char *array;

	str_size = _strlen(str);
	array = (char *)malloc(sizeof(char)* str_size + 1);

        if (array == NULL)
        {
                return ( (char *)NULL);
        }

	array_offset = array;

        while (*str)
        {
                *array_offset = *str;
		array_offset++;
		str++;
        }

	*array_offset = '\0';

        return (array);
}


/**
 * _strlen - returns string length
 *@s: string
 * Return: length
 */

int _strlen(char *s)
{
        int count;

        while (*s++ != '\0')
                count++;

        return (count);
}
