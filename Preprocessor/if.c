/*#include<stdio.h>
#define NUMBER 1
void main() {
#if (NUMBER==0)
printf("Value of Number is: %d",NUMBER);
#if (NUMBER==1)
printf("2 Value of Number is: %d",NUMBER);
#endif
}
*/

#include <stdio.h>
#include <conio.h>
#define NUMBER 1
void main() {
#if NUMBER==0
printf("Value of Number is: %d",NUMBER);
#else
printf("Value of Number is non-zero");
#endif
getch();
}