#include <stdio.h>
#include <string.h>

int main()
{
struct xyz{
    char * n;
    int eos;
};

struct xyz x = {"cppbuzz", 2017};
struct xyz y=x;
printf("%d", printf("%s",y.n));

return 0;
}