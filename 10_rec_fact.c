#include <stdio.h>
//recurent fact �ݹ�ʵ�ֽ׳� 
int rec_fact(int n);

int main(void){
	int n, result;
	
	printf("Enter n:\n");
	scanf("%d", &n);
	
	printf("The fact of %d is %d.\n", n, rec_fact(n));
	
	return 0;
}

int rec_fact(int n){
	int result;
	
	if(n == 1)           //���õݹ���� 
		return 1;
	else
		result = n * rec_fact(n-1);   //�ݹ�ʽ�� 
		
	return result;  //����ֵ����result 
	
}
