#include <stdio.h>
#include <string.h>
//����һ����λ���źţ���[11,59]֮�䣬ÿλ���ִ���һ���źţ�������Ӧ���ź� 
int main(void){
	int i, num, op1, op2;
	char *sig[15] = {"","Unread","Barely","Consider","Practical","Perfect", //�ַ������� 
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
	
	if(op1 == 0 || op2 == 0){ //�����������һλΪ0����������Ч 
		printf("Wrong input!\n");
		return 0;
	}
	else
		printf("%s ---- %s\n",sig[op2+5], sig[op1]);
	
	return 0;
}
