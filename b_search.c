#include <stdio.h>
//binary search 
int bsearch(int *p, int n, int x);

int main(void){
	int m, x;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	printf("Enter x:\n");
	scanf("%d",&x);

	m = bsearch(a, 10, x);

	if(m>=0)
		printf("Index = %d \n",m);
	else
		printf("Not found!\n");

	return 0;
}

int bsearch(int *p, int n, int x){
	int low, high;
	int mid;

	low = 0; high = n-1;
	mid = (low+high)/2;
	
	while(low <= high){
		if(x==p[mid])
			break;
		else if(x > p[mid])
			low = mid + 1;
		else
			high = mid - 1;
	
	}
	if(low <= high)
		return mid;
	else
		return -1;

}
