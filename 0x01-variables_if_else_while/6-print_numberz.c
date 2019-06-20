#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - programs things
*Result: always returns 0
*Return: 0
*
 */


int main(void)
{
int number;
for (number = 0; number < 10; ++number)
{
putchar(number + '0');
}
putchar('\n');
return (0);
}
