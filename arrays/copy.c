#include<stdio.h>
int main()
{
int a1[10], a2[10];
int i,n;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0; i<n;i++)
{
scanf("%d\n",&a1[i]);
}
for(i=0;i<n;i++)
{
a2[i]=a1[i];
}
printf("\nThe elements stored in the first array are :\n");
        for(i=0; i<n; i++)
        {
            printf("% 5d", a1[i]);

        }
printf("\nThe elements stored in the second array are :\n");
        for(i=0; i<n; i++)
        {
            printf("% 5d", a2[i]);
        }

}