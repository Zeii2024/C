#include <stdio.h>
#include <stdlib.h>
//动态空间分配
 
int main(void){
	int n, i, sum, *p;
	
	printf("Enter n:\n");
	scanf("%d",&n);
	//申请动态空间分配 
	if((p=(int *)calloc(n,sizeof(int))) == NULL){   //这个操作和代码基本上是通用的 
		printf("Unable to allocate memory.\n");
		exit(1);
	}
	//输入n个整数 
	printf("Input %d integers:\n",n);
	for(i=0; i<n; i++)
		scanf("%d", p+i);
	
	//求和 
	sum = 0;	
	for(i=0; i<n; i++)
		sum = sum + *(p+i);
		
	printf("The sum is %d\n",sum); 
		
	free(p); //一定要记得用完之后释放 
	
	return 0;
	
}
