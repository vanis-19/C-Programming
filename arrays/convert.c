//Write a program to convert a capital letter into small and vice-versa in a given string.


        #include<stdio.h>
        void main()
        {
        char n[20];
        int i;
        printf("Entre name");
        gets(n);
        for(i=0;n[i]!='\0';i++)
        {
            if(n[i]>=65 && n[i]<=90)
            n[i]+=32;
            else if(n[i]>=97 && n[i]<=122)
            n[i]=n[i]-32;
        }
        printf("\n\n\n%s",n);
        }