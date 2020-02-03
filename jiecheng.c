#include <stdio.h>
int fact(int n);

int main(void)
{
	int i,product,n;
	product = 1;

	printf("Enter n:\n");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		product = fact(i);
		printf(" %d! : %d.\n",i,product);
	}
	return 0;
}


int fact(int n)
{
	int j,item;

	item = 1;
	for(j=1;j<=n;j++)
	{
		item = item * j;
	}
	return item;
}