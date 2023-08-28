#include "main.h"

/**
 * _isdigit - Check for digit from 0 to 9
 * @c: Number to be checked
 * return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
