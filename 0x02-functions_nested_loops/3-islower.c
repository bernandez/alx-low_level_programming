#include "holberton.h"
/**
 * _islower - check if the character is lowerCase
 * @c: the character to be cheked
 * Return: 1 if lower, 0 if capital
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
