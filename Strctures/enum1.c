#include "stdio.h"

enum Yenum{
       C, CPP, Java
};

enum Xenum{
    Python, PP, dvance, Yenum
};

int main()
{
  enum Xenum var;
  printf("%d",sizeof(var));
  return 0;
}