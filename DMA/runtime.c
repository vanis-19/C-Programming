//Write a program to allocate memory at runtime for an array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr, i,n;
    printf("enter the elements");
    scanf("%d",&n);
    arr=(int*)calloc(n, sizeof(int));
    if(arr==NULL)
        {
               printf("memory cannot be allocated\n");
         }
    else
        {
              printf("enter the elements");
              for(i=0;i<n;i++)
              {
                  scanf("%d",arr[i]);
               }
               printf("elements of array");
               for(i=0;i<n;i++)
              {
                      printf("%d\n", *(arr+i));
              }
        }

}