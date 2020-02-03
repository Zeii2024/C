#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int sum = 0;
	printf("Enter the number n:\n");
	scanf("%d",&n);


	for(i=0;i<=n;++i)
	{
		sum = sum + i;
	}
	printf("The result of sum of numbers from 1 to %d is %d.\n",n,sum);

	return 0;
}