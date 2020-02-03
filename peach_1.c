#include <stdio.h>

int main(void){
	int n, peach, i;
	peach = 1;

	printf("Enter n:\n");
	scanf("%d",&n);

	for(i=1;i<n;i++){

		peach =(peach+1)*2;
	}
	printf("%d\n",peach);

	return 0;

}