#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//�ö�̬�����ڴ�ķ����������ַ��������� 
int main(void){
	int i, j, n;
	char *color[10], str[15];
	
	printf("Input some color:(End with #)\n");
	scanf("%s",str);
	
	n = 0;
	while(str[0] != '#'){
		color[n] = (char *)malloc(sizeof(char) * (strlen(str) + 1)); //�����ڴ�Ĵ�С,+1����Ϊ�ַ�����'\0'��β 
		strcpy(color[n], str); //ע���ַ����ĸ�ֵ 
		
		n++;
		scanf("%s",str);	 
	}
	
	printf("These words are:\n");
	for(i=n-1; i>=0; i--){
		printf("%s\t", color[i]);
	}
	free(*color); //��malloc����Ҫ��free 
	return 0;
}
