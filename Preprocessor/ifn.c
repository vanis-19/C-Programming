#include <stdio.h>
#include<stdio.h>
#include <conio.h>
//#define INPUT
int main() {
int a=0;
#ifndef INPUT
a=2;
#else
printf("Enter a:");
scanf("%d", &a);
#endif
printf("Value of a: %d\n", a);
}