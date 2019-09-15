#include "holberton.h"

/**
 * * rev_string - programs things
 * *Result: always returns 0
 * *@s : variable to define array length
 * *Return: 0 sucess
 * *
   */
void rev_string(char *s)
{
int a;
int b;
char l;
a = 0;
while (*(s + a) != '\0')
a++;
a--;
for (b = 0; b < a; b++)
{
l = *(s + a);
*(s + a) = *(s + b);
*(s + b) = l;
a--;
}
}
