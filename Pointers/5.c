#include <stdio.h>
#include<stdlib.h>
int main()
{
   char *_ptr;
   *_ptr = malloc(10);
   *_ptr = 999;
   printf("%d",*_ptr);
    return 0;
}