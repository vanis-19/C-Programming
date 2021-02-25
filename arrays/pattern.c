#include<stdio.h>
int main()
{
int a[5],i,j;
char c;
printf("Enter 1st letter of your name");
scanf("%c",&c);
    for(i=c;i<=c+5;i++)
    {
        for(j=c;j<=i;j++)
        {
            printf("%c", j);
        }
     printf("\n");
    }
}