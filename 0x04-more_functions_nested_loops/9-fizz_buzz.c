#include "holberton.h"
#include <stdio.h>
/**
*main - programs things
*Result: always returns 0
*Return: 0 sucess
*
 */

int main(void)
{
int a;
for (a = 1 ; a <= 100 ; a++)
{
if
(((a % 3) == 0) && ((a % 5) != 0))
{
printf("Fizz ");
}
else if
(((a % 3) != 0) && ((a % 5) == 0))
{
if (a == 100)
printf("Buzz");
else
printf("Buzz ");
}
else if
(((a % 3) == 0) && ((a % 5) == 0))
{
printf("FizzBuzz ");
}
else
{
printf("%d ", a);
}
}
printf("\n");
return (0);
}
