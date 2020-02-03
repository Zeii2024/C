#include <stdio.h>
int main(void)
{
	int i, n, flag;
	double sum,denominator;

	printf("Enter n:\n");
	scanf("%d",&n);

	flag = 1;
	sum = 0;
	denominator = 1;
	for(i=1;i<=n;i++)
	{
		sum = flag*1.0/denominator + sum;
		flag = -flag;
		denominator += 2;

	}

	printf("The sum of %d is %f.\n",n,sum);

	return 0;
}