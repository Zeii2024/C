#include <stdio.h>
#include <stdlib.h>
//��̬�ռ����
 
int main(void){
	int n, i, sum, *p;
	
	printf("Enter n:\n");
	scanf("%d",&n);
	//���붯̬�ռ���� 
	if((p=(int *)calloc(n,sizeof(int))) == NULL){   //��������ʹ����������ͨ�õ� 
		printf("Unable to allocate memory.\n");
		exit(1);
	}
	//����n������ 
	printf("Input %d integers:\n",n);
	for(i=0; i<n; i++)
		scanf("%d", p+i);
	
	//��� 
	sum = 0;	
	for(i=0; i<n; i++)
		sum = sum + *(p+i);
		
	printf("The sum is %d\n",sum); 
		
	free(p); //һ��Ҫ�ǵ�����֮���ͷ� 
	
	return 0;
	
}
