#include <stdio.h>
#include <string.h>
#define MAXLINE 100   //��������͸�ֵ��û�еȺ�û�зֺ� 
//���ַ������ȡһλ
 
void encrypt(char *);  //����һ��ָ��������ڵ�����Ԫ�ؽ��в��� 
int main(void){
	char line[MAXLINE];
	
	printf("Enter the string:");
	gets(line);     //�ַ��������� 
	
	encrypt(line);
	
	printf("After being encrypted: \n %s%s\n",line);
	
	return 0;
}

void encrypt(char *s){
	
	for(; *s != '\0'; s++){
		if(*s == 'z')
			*s = 'a';
		else
			*s = *s + 1; //�ַ���һ���൱��ȡ����һλ��ĸ 
	}
}
