#include "holberton.h"

/**
  *print_chessboard - programs things
  *Result: always returns 0
  *@a : variable
  *Return: 0 sucess
  *
  */

void print_chessboard(char (*a)[8])
{
int b, c;
for (b = 0; b < 8; b++)
{
for (c = 0; c < 8; c++)
{
_putchar(a[b][c]);
if (c == 7)
_putchar('\n');
}
}
}
