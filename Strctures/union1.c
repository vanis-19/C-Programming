#include "stdio.h"

union example{
    int a;
    int b;

};

int main(){
union example obj;
obj.a = 10;
obj.b=20;
printf("%d %d", obj.a, obj.b);
return 0;
}