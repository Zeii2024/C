#include <stdio.h>
//���ת�þ���
 
int main(void){
	int i,j,n,temp;
	int a[6][6];

	//�������
	printf("Enter n:\n");
	scanf("%d",&n);

	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			a[i][j] = i*n+j+1;

	//���ԭ����
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\n\n");
	//ת�þ���
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			if(i<=j){         //ֻ���������Ǿ���
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
				}
		
	//���ת�þ���
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}

	return 0;
}
