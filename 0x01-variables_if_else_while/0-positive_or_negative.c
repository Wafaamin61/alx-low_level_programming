#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number %d ",n);
if (n > 0)
{
printf("is positive\ 98");
}
else if (n == 0)
{
printf("is zero\ 0");
}
else
{
printf("is negative\ -98");
}
return (0);
}
