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
char alfa;
for (number = 0; number < 10; ++number)
{
putchar(number + '0');
}
for (alfa = 'a'; alfa <= 'f'; ++alfa)
{
putchar(alfa);
}
putchar('\n');
return (0);
}
