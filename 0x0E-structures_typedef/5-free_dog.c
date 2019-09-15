#include "dog.h"
#include <stdlib.h>

/**
  *free_dog - programs things
  *Result: always returns 0
  *@d : variable
  *Return: 0 sucess
  */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
