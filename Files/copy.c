#include<stdio.h>
int main()
{
FILE *fp, *fp1;
char c;
fp=fopen("abc.txt","r");
fp1=fopen("xyz.txt","w");
if(fp==NULL)
printf("file not found");
while(1)
{
c=fgetc(fp);
if(c==EOF)
break;
fputc(c,fp1);
}
printf("\nFile created");
fclose(fp);
fclose(fp1);
}
