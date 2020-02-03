#include <stdio.h>

int main(void){
	int n, i;
	double grade,highest;

	printf("Enter n:\n");
	scanf("%d",&n);

	printf("Enter grades:\n");
	scanf("%lf",&grade);
	
	highest = 0;
	for(i=1;i<n;i++){
		if(highest<grade) highest=grade;
		scanf("%lf",&grade);
	}
	printf("Highest is %.2lf\n",highest);

	return 0;
}