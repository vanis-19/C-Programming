#include<stdio.h>
main()
{
FILE *fp;
char c;
fp=fopen("abc.txt", "r");
if(fp==NULL)
printf("File does not exist");
while(1)
{
c=fgetc(fp);
if(c==EOF)
break;
printf("%c\n",c);
}
fclose(fp);
}