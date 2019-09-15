#include "holberton.h"
/**
*_isalpha - programs things
*@c : character defined
*Result: always returns 0
*Return: 0
*
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
