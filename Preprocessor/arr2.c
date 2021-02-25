#include <stdio.h>
int x=8;
int main()
{
/*do{
do{
printf("%o",x);
}
while(!-2);

}
while(0);
return 0;*/
int a=2, b=3;
if(--a || ++b)
{
printf("%d %d", a,b);
}
else{
break;
}
}