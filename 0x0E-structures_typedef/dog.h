#ifndef _DOG_H_
#define _DOG_H_

/**
  *struct dog - programs things
  *Result: always returns 0
  *@name : variable
  *@age : variable
  *@owner : variable
  *Return: 0 sucess
  */

struct dog
{
		char *name;
			float age;
				char *owner;
};

/**
   * dog_t - program
    */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
