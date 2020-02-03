#include <stdio.h>

int main(void)
{
	int number,i;
	double price;

	for(i=0;i<5;i++){

		printf("[4] is orange;\n");
		printf("[3] is apple;\n");
		printf("[2] is watermalon;\n");
		printf("[1] is peach;\n");
		printf("[0] exit;\n");

		printf("Enter your number:\n");
		scanf("%d",&number);

		if(number == 0)
			break;

		switch(number){
			case 4: price = 3.0; break;
			case 3: price = 2.5; break;
			case 2: price = 2.0; break;
			case 1: price = 1.5; break;
			default: price = 0.0; break;
	
		}
		printf("the price is %.2f.\n",price);
	}
	printf("Thanks!\n");

	return 0;
}