#include <stdio.h>
//���ö�ά���飬�洢�������ά���󣬲�ָ�������� 
 
int main(void){
	int row,col,i,j;
	int a[3][2];

	//����6������
	printf("Enter 6 integers:\n");
	for(i=0; i<3; i++)
		for(j=0; j<2; j++)
			scanf("%d",&a[i][j]);

	//������������飻
	for(i=0; i<3; i++){
		for(j=0; j<2; j++)
			printf("%5d",a[i][j]);
		printf("\n");
		}

	//�������ֵ��
	row = col =0;
	for(i=0; i<3; i++)
		for(j=0; j<2; j++){
			if(a[row][col]<a[i][j]){
				row = i;
				col = j;
			}
		}
	printf("�������ǣ�%d\n",a[row][col]);

	return 0;

}
