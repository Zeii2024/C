#include <stdio.h>

double fact(int n);

int main(void){
	int num;
	double sum=0;
	int i;

	printf("Enter a number(1-100):\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		sum = sum +fact(i);
	}
	printf("The sum of fact of %d \nis %e.\n",num,sum);

	return 0;
}

double fact(int n){
	int i;
	double result=1;

	for(i=1;i<=n;i++){
	result = result*i;
	}
	
	return result;
}