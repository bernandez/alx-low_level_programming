#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of the allocatd memory
 * @c: initializing character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (!size || !ptr)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
