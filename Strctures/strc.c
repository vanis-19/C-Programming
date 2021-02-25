#include<stdio.h>
#include<string.h>
struct student
{
char name [20] ;
int rollno;
float marks;
} ;
int main()
{
struct student s;
//strcpy(s.name, "Sai");
//s.rollno=9;
//s.marks=9;
printf("enter name rollno marks");
scanf("%S %d %f", s.name, &s.rollno, &s.marks);
printf("%S %d %f", s.name, s.rollno, s.marks);
}

