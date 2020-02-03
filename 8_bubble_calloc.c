#include <stdio.h>
#include <stdlib.h>

// ���䶯̬�ռ��ð������
 
void bubble(int *p, int n);
int main(void){
	int n, i, *p;
	
	printf("Enter n��");
	scanf("%d",&n);
	
	//���䶯̬�ռ�
	if((p=(int *)calloc(n, sizeof(int))) == NULL){
		printf("Unable to allocate memory!\n");
		exit(1);
	} 
	//����n������
	printf("Input %d integers:\n",n);
	for(i=0; i<n; i++)
		scanf("%d",p+i);
		
	bubble(p, n);
	
	for(i=0; i<n; i++)
		printf("%3d",*(p+i));
	printf("\n");
	
	free(p); //�ͷſռ� 
	
	return 0; 
}

void bubble(int *p, int n){
	int temp, i, j;
	
	//ð������ 
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
