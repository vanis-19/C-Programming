#include "stdio.h"

union example{
    int a;
    int b;

};

int main(){
    union example obj;
    obj.a = 88;
    printf("%d", obj.a);
    obj.b = 99;
    printf("%d ", obj.b);
    return 0;
}