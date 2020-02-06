#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sysuser{
	char username[20];
	char password[10];
};
void encrypt(char *p);
int check_valid(struct sysuser *psu);

int main(void){
	struct sysuser su;
	
	printf("Input username :\n");   //���������м䲻���пո� 
	scanf("%s", su.username);
	printf("Input password :\n");
	scanf("%s", su.password);
	
	if(check_valid(&su) == 1)   //��Ҫһ��ȡ��ַ�������Խ������ṹ����Ϊ���� 
		printf("The username is valid.\n");
	else
		printf("InValid user!.\n");
	return 0;	
}

void encrypt(char *p){
	int i;
	for(i=0; i < strlen(p); i++) 
		p[i] = p[i]^15;
}

int check_valid(struct sysuser *psu){
	FILE *fp;
	char in_user[32], in_psw[10];
	char userline[32];
	int check = 0;
	//���û���������ƴ�ӵ�һ���ַ�������ʽ���ļ���������ͬ�����ڱȽ� 
	strcpy(in_user, psu->username);
	strcpy(in_psw, psu->password);
	encrypt(in_psw);
	strcat(in_user, " "); strcat(in_user, in_psw); strcat(in_user, "\n");
	 
	
	if((fp = fopen("user.txt","r"))==NULL){
		printf("Failed to open file!\n");
		exit(0);
	}
	
	while(!feof(fp)){
		fgets(userline, 30, fp);  //��fp�ļ��ж�ȡһ�е�userline 
		if(strcmp(in_user, userline) == 0){
			check = 1;
			break;
		}
	}
	if(fclose(fp)){         //�ر��ļ� 
		printf("Failed to close the file!\n");
		exit(0);
	}
	return check;
}
