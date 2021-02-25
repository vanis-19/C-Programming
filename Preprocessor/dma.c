#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *s;
s=malloc(100);
strcpy(s, "Python is easy to learn language");
printf("%s\n", s);
free(s);

}
