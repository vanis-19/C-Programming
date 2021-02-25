#include<stdio.h>
int main()
{
int vector[] = {28, 41, 7};
int *pi = vector;
printf("%d\n",*pi);
pi += 1; // pi: 104
printf("%d\n",*pi);
pi += 1; // pi: 108
printf("%d\n",*pi);
}