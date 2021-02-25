#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *p;
    int m1, m2;
    m1=10, m2=20;
    p=(char*)malloc(m1);
    strcpy(p, "sai");
    p=(char*)realloc(p, m2);
    strcat(p, "computers");
    printf("%s\n", p);
    return 0;




}
