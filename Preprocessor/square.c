#include <stdio.h>
#define number 15
//int square=number*number;
#undef number
int square=number*number;
int main() {
   printf("%d",square);
}