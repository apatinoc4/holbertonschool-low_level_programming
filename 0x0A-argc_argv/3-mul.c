#include <stdio.h>
#include <stdlib.h>

/**
 * *main - programs things
 * *Result: always returns 0
 * *@argc : variable
 * *@argv : variable
 * *Return: 0 sucess
   */


int main(int argc, char *argv[])
{
int a, b, c;
if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = (a *b);
printf("%d\n", c);
return (0);
}
