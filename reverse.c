#include <stdio.h>

int main(void){
	long int num;
	int digit;

	printf("Enter number:\n");
	scanf("%d",&num);

	if(num<0) num=-num;
	do{
		digit = num%10;
		printf("%d",digit);
		num = num/10;
	}while(num != 0);
	printf("\n");

	return 0;
}