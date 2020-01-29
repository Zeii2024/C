#include <stdio.h>
//#include <math.h>

int main (void){
	int count, num;
	float grade, total, average;
	total = 0;
	num = 0; count = 0;

	printf("Enter your grade:\n");
	scanf("%f", &grade);

	while(grade>0){
		total = total + grade;
		num = num + 1;

		if(grade < 60) count++;

		scanf("%f", &grade);

	}

	average = total / num;
	printf("The average of grades is %.2f\n", average);
	printf("The number of failures is %d\n", count);


	return 0;
}
