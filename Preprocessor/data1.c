#include<stdio.h>
int main()
{

int i, j = 10, k=12;
i = printf("Hello");

printf("%d", i);
i = printf("%d", i);

printf("%d", i);
i=printf("%d %d %d", i, j, k);

printf("%d", i);

return 0;
}