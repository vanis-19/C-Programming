#include<stdio.h>
#include <stdlib.h>
            struct student {
                          int roll;
                          float perc;
                          char name[30];
                          };
int main()
{
struct student *st;
st=(struct student*)malloc(1*sizeof(struct student));
if(st==NULL)
{
printf("memory is not allocated");
}
printf("Enter name: ");
                gets(st->name);
                printf("Enter roll number: ");
                scanf("%d",&st->roll);
                printf("Enter percentage: ");
                scanf("%f",&st->perc);

                printf("\nEntered details are:\n");
printf("Name: %s, Roll Number: %d, Percentage: %.2f\n",st->name,st->roll,st->perc);

                return 0;
                }