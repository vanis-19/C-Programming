//write a program to enter your name and display a pattern
#include<stdio.h>
int main()
{
int i,j;
char a[20] ;
printf("Enter 1st letter of your name");
scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c", a[j]);
        }
     printf("\n");
    }
}