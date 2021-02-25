//Write a program to find the maximum, second maximum,
#include<stdio.h>
int main()
{
int a[4];
int i, max, smax;
printf("enter the elements");
for(i=0; i<4;i++)
{
scanf("%d\n",&a[i]);
}
max=a[0];
smax=a[0];
for(i=0;i<4;i++)
{
if(a[i]>max)

max=a[i];
else if(a[i]>smax)
smax=a[i];
}
printf("\nMaximum=%d\nsecond maximum=%d",max,smax);
}