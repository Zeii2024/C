#include <stdio.h>
//用指针操作数组
 
int main(void){
	int a[10], n;
	int i, sum1, sum2;
	int *p;

	printf("Enter n (n<=10): ");
	scanf("%d",&n);

	printf("Enter a[%d]:\n", n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);

	//用数组求和
	sum1 = 0;
	for(i=0; i<n; i++)
		sum1 = sum1 + a[i];
	printf("sum1 = %d\n", sum1);

	//用指针求和；
	sum2 = 0;
	for(p=a; p<a+n; p++)
		sum2 = sum2 + *p;
	printf("sum2 = %d\n", sum2);

	return 0;
}
