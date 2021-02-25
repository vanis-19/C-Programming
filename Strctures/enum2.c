#include "stdio.h"

typedef enum{
    Jan, Feb=7, March, June, Aug
}MON;

int main()
{
  MON var = March;
  MON var1=Feb;
  printf("%d %d",var1, var);
  return 0;

}