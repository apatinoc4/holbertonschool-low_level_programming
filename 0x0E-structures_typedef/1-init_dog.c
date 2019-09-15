#include "dog.h"

/**
  *init_dog - programs things
  *Result: always returns 0
  *@name : variable
  *@age : variable
  *@owner : variable
  *@d : Variable
  *Return: 0 sucess
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
