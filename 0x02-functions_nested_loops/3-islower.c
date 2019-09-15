#include "holberton.h"
/**
*_islower - programs things
*Result: always returns 0
*@c : character defined
*Return: 0
*
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
