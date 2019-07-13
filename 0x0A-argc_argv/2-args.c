#include <stdio.h>


/**
 * *main - programs things
 * *Result: always returns 0
 * *@argc : variable
 * *@argv : variable
 * *Return: 0 sucess
   */


int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

