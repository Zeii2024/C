#include <stdio.h>
//输出转置矩阵
 
int main(void){
	int i,j,n,temp;
	int a[6][6];

	//输入矩阵；
	printf("Enter n:\n");
	scanf("%d",&n);

	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			a[i][j] = i*n+j+1;

	//输出原矩阵；
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\n\n");
	//转置矩阵；
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			if(i<=j){         //只遍历上三角矩阵；
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
				}
		
	//输出转置矩阵
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}

	return 0;
}
