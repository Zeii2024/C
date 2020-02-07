#include <stdio.h>
#include <string.h>
//输入一个两位数信号，在[11,59]之间，每位数字代表一种信号，输出想对应的信号 
int main(void){
	int i, num, op1, op2;
	char *sig[15] = {"","Unread","Barely","Consider","Practical","Perfect", //字符串数组 
		"Faint sig","Very weak","Weak sig","Fair sig","Fair good","Good sig","Moderate strong","Strong sig","Exstrem strong"};
	
	printf("Enter your opration:\n");
	scanf("%d",&num);
	
	if(num<11 || num>59){
		printf("Wrong input!\n");
		return 0;
	}
	else{
		op1 = num/10;
		op2 = num%10;
	}
	
	if(op1 == 0 || op2 == 0){ //如果输入中有一位为0，则输入无效 
		printf("Wrong input!\n");
		return 0;
	}
	else
		printf("%s ---- %s\n",sig[op2+5], sig[op1]);
	
	return 0;
}
