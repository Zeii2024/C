#include <stdio.h>

int main(void){
	int n, i, j, temp,min;
	int a[15];

	printf("Enter n:\n");
	scanf("%d",&n);

	printf("Enter %d numbers:\n",n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	min = 0;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i] > a[j]){
				temp = a[i];
	  		a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0; i<n; i++)
		printf("  %d",a[i]);
	printf("\n");
	return 0;
}