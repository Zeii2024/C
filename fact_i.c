#include <stdio.h>
#include <math.h>

int fact(i)
{
	int fact,j;
	fact = 1;
	for(j=1;j<=i;j++)
	{
		fact = j * fact;
	}
	return fact;
}

int main(void)
{
	int n,product;
	printf("Enter n:\n");
	scanf("%d",&n);

	product=fact(n);

	printf("The fact of %d is %d\n",n,product);

	return 0;
}