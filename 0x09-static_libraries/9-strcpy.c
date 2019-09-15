#include "holberton.h"

/**
  * _strcpy - programs things
  *Result: always returns 0
  *@dest : variable to define array length
  *@src : variable to define array length
  *Return: 0 sucess
  *
  */
char *_strcpy(char *dest, char *src)
{
		int a;
			for (a = 0; src[a] != '\0'; a++)
					{
				dest[a] = src[a];
					}
				dest[a] = '\0';
					return (dest);
}
