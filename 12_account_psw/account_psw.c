#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sysuser{    //将用户信息定义为一个结构
		char account[20];
		char password[10];
	};
	
void encrypt(char *p);

int main(void){
	FILE *fp;
	int i;
	struct sysuser su;
	//打开文件 
	if((fp = fopen("user.txt","w")) == NULL){
		printf("Cant open the file!\n");
		exit(0);
	}
	//输入账号和密码 
	printf("Input the account and password:\n");
	for(i=0; i<5; i++){
		scanf("%s %s", su.account, su.password);
		encrypt(su.password);
		printf("%s %s\n", su.account,su.password);
		fprintf(fp, "%s %s\n", su.account, su.password);
	}
	//关闭文件 
	if(fclose(fp)){
		printf("Cant close the file!\n");
		exit(0);
	}
	return 0;	
}

 void encrypt(char *p){
 	int i;
 	//每一个字符都与15（00001111）进行异或运算
	for(i=0; i<strlen(p); i++)
		p[i] = p[i]^15; 
 }

