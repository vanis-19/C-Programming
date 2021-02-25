#include<stdio.h>
#include<string.h>
void stringcpy(char *, char *);
int main()
{
char s[20]="Hello world";
char d[20];
printf("source string%s", s);
stringcpy(d,s);
printf("target string%s", d);
return 0;
}
void stringcpy(char *d, char *s)
{
while(*s!='\0')
{
*d=*s;
s++;
d++;
}
*d='\0';
}