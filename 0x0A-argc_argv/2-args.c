#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 1)
	{
		for (; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
