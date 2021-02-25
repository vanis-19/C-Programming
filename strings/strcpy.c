#include<stdio.h>
int strcmp(const char*s1, const char *s2);
int main()
{
char s1[20], s2[20];
printf("enter a string");
gets(s1);
gets(s2);
int result=strcmp(s1,s2);
if(result==0)
printf("strings are equal");
else
printf("strings are not equal");
}
int strcmp(const char*s1, const char *s2)
{
while(*s1==*s2)
{
if(*s1=='\0')
return 0;
s1++;
s2++;
}
return(*s1-*s2);
}