#include <stdio.h>
int main()
{
	int NUM; //to store number
	int pos; //to store bit

	printf("Enter an 8 bits integer number: ");
	scanf("%d",&NUM);
	printf("Now, enter a bit number (from 0 to 7) to check, whether it is SET or not: ");
	scanf("%d",&pos);

	//checking bit status
	if(NUM | (1<<pos))
		printf("Bit number %d is SET in number %d.\n",pos,NUM);
	else
		printf("Bit number %d is not SET in number %d.\n",pos,NUM);

	return 0;
}