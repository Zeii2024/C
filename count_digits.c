#include <stdio.h>

int main(void){

	int count=0;
	long int number;

	printf("Enter a number:\n");
	scanf("%d",&number);

	if (number<0) number=-number;
	do{
		number = number/10;
		count++;
	}while(number!=0);

	printf("There are %d digits.\n",count);

	return 0;
}