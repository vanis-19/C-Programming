//Write a program to enter a string and replace a with e.
#include<stdio.h>
int main()
{
int i;
char a[20];
printf("enter your name");
gets(a);
for(i=0;a[i]!=NULL;i++)
 {
 if(a[i]=='a')
 a[i]='c';
 }
 printf("%s",a);
 }