#include<stdio.h>
int main()
{
int num = 0;
int *pi = &num;
printf("Address of num: %d Value: %d\n",&num, num);
printf("Address of pi: %d Value: %d\n",&pi, pi);
printf("Size of *char: %d\n",sizeof(char*));

}