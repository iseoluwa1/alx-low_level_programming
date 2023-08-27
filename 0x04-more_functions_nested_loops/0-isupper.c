#include "main.h"

/**
 * _isupper - Check if a number is uppercase
 * @c: The number to be checked
 * Return: 1 for uppercase or 0 for anyting else
 */
int _isupper(int c)
{
	if (c >= 85 && c <= 90)
	{
		return (1);
	}
	return (0);
}
