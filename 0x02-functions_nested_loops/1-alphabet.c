#include "holberton.h"
/**
 * print_alphabet - entry point for the program
 * Description: Print lowercase alphabets
 * to the standard output
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
