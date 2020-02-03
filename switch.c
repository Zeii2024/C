#include <stdio.h>

int main(void)
{
	double value1,value2;
	char op;

	printf("Enter a forlume:\n" );
	scanf("%lf %c %lf",&value1,&op,&value2);

	if(op == '/'){
		if(value2 == 0){
			printf("Divisor can not be 0!\n");
			return 0;
		}
		else
			printf("The result is %.2f\n",value1 / value2);

	}

	switch(op){
		case '+': printf("The result is %.2f\n",value1 + value2); break;
 
		case '-': printf("The result is %.2f\n",value1 - value2); break;

		case '*': printf("The result is %.2f\n",value1 * value2); break;
	
		default: printf("Wrong opration!\n"); 	
		}
	
	return 0;	
	
}