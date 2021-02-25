#include "stdio.h"
#include "string.h"

int main()
{
struct xyz{
   char * n;
   int eos;
};

struct xyz x = {"cppbuzz", 2017};
struct xyz y=x;
printf(printf("%s",y.n), printf("%s",y.n));

return 0;
}
