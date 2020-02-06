#include <stdio.h>
//recurent fact 递归实现阶乘 
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
	
	if(n == 1)           //设置递归出口 
		return 1;
	else
		result = n * rec_fact(n-1);   //递归式子 
		
	return result;  //返回值付给result 
	
}
