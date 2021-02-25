#include <stdio.h>

union example{
    char ch;
    int no;
};

int main(){

printf("%d", sizeof(union example));
return 0;
}

