#include "holberton.h"
#include <stdlib.h>

/**
  *free_grid - programs things
  *Result: always returns 0
  *@height : variable
  *@grid : variable
  *Return: 0 sucess
  */

void free_grid(int **grid, int height)
{
int a;
if (grid == NULL || height <= 0)
return;
for (a = 0; a < height; a++)
free(grid[a]);
free(grid);
}

