#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sysuser{    //���û���Ϣ����Ϊһ���ṹ
		char account[20];
		char password[10];
	};
	
void encrypt(char *p);

int main(void){
	FILE *fp;
	int i;
	struct sysuser su;
	//���ļ� 
	if((fp = fopen("user.txt","w")) == NULL){
		printf("Cant open the file!\n");
		exit(0);
	}
	//�����˺ź����� 
	printf("Input the account and password:\n");
	for(i=0; i<5; i++){
		scanf("%s %s", su.account, su.password);
		encrypt(su.password);
		printf("%s %s\n", su.account,su.password);
		fprintf(fp, "%s %s\n", su.account, su.password);
	}
	//�ر��ļ� 
	if(fclose(fp)){
		printf("Cant close the file!\n");
		exit(0);
	}
	return 0;	
}

 void encrypt(char *p){
 	int i;
 	//ÿһ���ַ�����15��00001111�������������
	for(i=0; i<strlen(p); i++)
		p[i] = p[i]^15; 
 }

