//Write a program to enter a one-digit number and display it in words.

#include<stdio.h>
        void main()
        {
        char n[][10]={{"Zero"},{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"}};
        int num;
        printf("enter any 1 digit number \n");
        scanf("%d",&num);

            printf("\nIn Words: %s",n[num]);

        }