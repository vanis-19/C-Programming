//Write a program to input name of a student and update in an existing file.

#include<stdio.h>
int main()
{
FILE *fp;
char name[10];
fp=fopen("students.txt", "a");
printf("\nEnter ur name");
gets(name);
fputs(name, fp);
printf("\nFile updated");
fclose(fp);

}