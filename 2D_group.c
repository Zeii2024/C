#include <stdio.h>
//利用二维数组，存储并输出二维矩阵，并指出最大的数 
 
int main(void){
	int row,col,i,j;
	int a[3][2];

	//输入6个数；
	printf("Enter 6 integers:\n");
	for(i=0; i<3; i++)
		for(j=0; j<2; j++)
			scanf("%d",&a[i][j]);

	//按矩阵输出数组；
	for(i=0; i<3; i++){
		for(j=0; j<2; j++)
			printf("%5d",a[i][j]);
		printf("\n");
		}

	//输出最大的值；
	row = col =0;
	for(i=0; i<3; i++)
		for(j=0; j<2; j++){
			if(a[row][col]<a[i][j]){
				row = i;
				col = j;
			}
		}
	printf("最大的数是：%d\n",a[row][col]);

	return 0;

}
