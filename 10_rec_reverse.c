#include <stdio.h>
//recurent reverse the number 
int rec_reverse(int n);

int main(void){
	int n;
	
	printf("Enter n:\n");
	scanf("%d", &n);
	
	printf("%d",rec_reverse(n));
	
	return 0;
}

void rec_reverse(int n){

	if(n <= 9)          //һ��һ����ӡ���� 
		printf("%d",n);
	else{
		printf("%d", n%10);
		rec_reverse(n/10);
    }
	
}


