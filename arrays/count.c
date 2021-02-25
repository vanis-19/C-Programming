//Write a program to count the vowels in a given name.
#include<stdio.h>
        int main()
        {
        char a[20];
        int i,count=0;
            printf("enter your name");
            gets(a);
            for(i=0;a[i]!=NULL;i++)
            {
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                    {
                    count++;
                    }
            }
                    printf("number of vowel are %d",count);
        }