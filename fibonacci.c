#include <stdio.h>

int main(void){

	int x1, x2,x,i;

	x1 = 1; 
	x2 = 1;

	printf("%d %4d",x1,x2);

	for(i=1;i<=8;i++){

		x = x1 + x2;
		printf("%5d",x);

		x2 = x1;
		x1 = x;
	}
	printf("\n");

	return 0;
}