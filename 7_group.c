#include <stdio.h>
//输出平均分和大于平均分的分数
 
int main(void){
	int i;
	double average,sum;
	int a[10];

	printf("Enter 10 grades:\n");
	sum = 0;
	for (i=0;i<10;i++){
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	average = sum/10.0;
	printf("%.2f\n",average);

	for(i=0;i<10;i++){
		if(a[i]>average)
			printf("  %d",a[i]);
	
	}
	printf("\n");

	return 0;
}
