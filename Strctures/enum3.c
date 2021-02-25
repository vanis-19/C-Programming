#include <stdio.h>

typedef enum{
    Male, Female=0
}SEX;

int main()
{
  SEX var = Male;
  SEX var1 = Female;
  printf("%d %d",var, var1);
  return 0;
}