#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*Desciption: 'check numbers if it's positive or negative'
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
n = rand() - RAND_MAX / 2;
/*your code goes there*/
if (n > 0)
{
printf("is positive\n", n);
}
else if (n == 0)
printf("is zero\n", n);
}
else
(n < 0)
{
printf("is negative\n", n);
}
return (0);
}
