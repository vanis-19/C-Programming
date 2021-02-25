#include<stdio.h>
int main()
{
FILE *fp;
char c;
int x=0;
fp=fopen("abc.txt", "r");
if(fp==NULL)
printf("File does not exist");
while(1)
{
c=fgetc(fp);
if(c==EOF)
break;
else if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
x++;
}
printf("%d\n",x);
fclose(fp);
}