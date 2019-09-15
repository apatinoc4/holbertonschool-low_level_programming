#include "holberton.h"

/**
 * *_strlen_recursion - programs things
 * *Result: always returns 0
 * *@s : variable
 * *Return: 0 sucess
 * *
   */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
