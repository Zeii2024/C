#include <stdio.h>

int main(void)
{
	double value1,value2;
	char op;

	printf("Enter a forlume:\n" );
	scanf("%lf %c %lf",&value1,&op,&value2);

	if(op=='+')
		printf("The result is %.2f\n",value1 + value2);
	else if(op=='-')
		printf("The result is %.2f\n",value1 - value2);
	else if(op=='*')
		printf("The result is %.2f\n",value1 * value2);
	else if(op=='/')
		printf("The result is %.2f\n",value1 / value2);
	else
		printf("Wrong opration!\n");

	return 0;
	
	
}