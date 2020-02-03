//判断字符串是否为回文
#include<stdio.h>

int main(void){
	int k, i, flag;
	char line[80];

	printf("Enter a string:");
	k = 0;
	while((line[k] = getchar() )!= '\n')   //注意判断条件还要另加一个括号！！
		k++;
	
/*	for(i=0; i<k; i++)
		putchar(line[i]);
	printf("\n");
	*/

	//判断回文
	flag = 1;
	for(i=0; i<k-i; i++)
		if(line[i] != line[k-i-1]){
			printf("It is NOT a palindrome!\n");
			flag = 0;
			break;
		}
	if (flag==1)
		printf("It IS a palindrome!\n");
	
	
	
	return 0;

}