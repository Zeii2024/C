#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//����strstr,���ַ���s1���ҵ���ɾ���ַ���s2������Thisisatest����ɾ��is����������Thatest 
int main(void){
	char s1[80], s2[20];
	char *p = s1;
	char *c = NULL;
	char *h = s1; 
	char pre[80];
	int index = 0;//��һ��ѭ����ʱ��pre�ǿյ�,������strcpy 
	
	printf("����s1:\n");
	scanf("%s", s1);
	printf("����s2:\n");
	scanf("%s", s2);
	 
	
	while(strstr(p, s2)){		
	p = strstr(p, s2);
	c = p;   //����C��P����һ�£�Ȼ��Pָ����ַ�����'\0'���ô�ʱ��S1��ֵ��h��s1Ϊ��Th\0sisatest.���Զ�ȡhʱֻ����Th 
	*p = '\0';
	h = s1; 

	if(!index){   //��һ��ѭ��ʽindexΪ0������ʱ��Ϊ1 .��preΪ��ʱ��pre[0]Ӧ����'\0'�����Բ���ֱ��������strcat(). 
		strcpy(pre,h);
		index = 1;
	}else
		strcat(pre,h); //�����ѭ������strcat�� 
		
	*p = *c;//�ٽ�p��ԭ 
	p =  p+strlen(s2); //p����ƶ�s2�����ȣ��൱��ɾ��һ��s2�ַ� 
	p = strcpy(s1,p);//ֻ��strcpy(s1,p)ʱ��p��ֵ����s1��p����˿գ���֪��Ϊʲô������ǰ���ڼ���һ��p =  
	}
	if(p != NULL) //���p��Ϊ��ʱ��ѭ��������ֱ�ӽ�p���ӵ�pre���棬���pre���� 
		strcat(pre, p);
	printf("%s\n", pre);
	
	return 0;
}
