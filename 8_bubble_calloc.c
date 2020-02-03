#include <stdio.h>
#include <stdlib.h>

// 分配动态空间的冒泡排序
 
void bubble(int *p, int n);
int main(void){
	int n, i, *p;
	
	printf("Enter n：");
	scanf("%d",&n);
	
	//分配动态空间
	if((p=(int *)calloc(n, sizeof(int))) == NULL){
		printf("Unable to allocate memory!\n");
		exit(1);
	} 
	//输入n个整数
	printf("Input %d integers:\n",n);
	for(i=0; i<n; i++)
		scanf("%d",p+i);
		
	bubble(p, n);
	
	for(i=0; i<n; i++)
		printf("%3d",*(p+i));
	printf("\n");
	
	free(p); //释放空间 
	
	return 0; 
}

void bubble(int *p, int n){
	int temp, i, j;
	
	//冒泡排序 
	temp = 0;
	for(i=1; i<n; i++){
		for(j=0; j<n-i; j++){
			if(*(p+j) > *(p+j+1)){
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
		}		
	}	
}
