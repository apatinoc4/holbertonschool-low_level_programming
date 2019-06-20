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
int numberdecenas;
int numberunidades;
for (numberdecenas = 0; numberdecenas < 10; ++numberdecenas)
{
for (numberunidades = 0; numberunidades < 10; ++numberunidades)
{
putchar(numberdecenas + '0');
putchar(numberunidades + '0');
if (numberdecenas == 9 && numberunidades == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
