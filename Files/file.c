//Write a program to print names of all students from a file.


#include<stdio.h>
            void main()
            {
            FILE *fp,*fp1;
            char name[10];
                    fp=fopen("students.txt","r");
                    while(fgets(name,9,fp))
                    {
                    printf("%s",name);
                    }
                    fclose(fp);
            }