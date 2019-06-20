#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

p = n % 10

if (n > 5)
{
printf("Last digit of %d", p);
printf(" and is greater than 5 \n");
}
if (n == 0)
{
printf("Last digit of %d", p);
printf(" and is 0 \n");
}
if (n < 6 && n != 0)
{
printf("Last digit of %d", p);
printf(" and is less than 6 and not 0 \n");
}
	return (0);
}
