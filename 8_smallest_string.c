#include <stdio.h>
#include <string.h>
//��С�ַ��� strcmp() 
 
int main(void){
	int i;
	char sx[80], smin[80];
	//������һ���ַ�����������С�ģ�
	printf("Input 5 strings:\n");
	scanf("%s",sx);
	
	strcpy(smin, sx); 
	for(i=1; i<5; i++){       //������߱Ƚϣ�����һ�αȽ�һ�Σ�����ֻ��Ҫ���������� 
		scanf("%s",sx);
		if(strcmp(sx, smin) < 0)
			strcpy(smin, sx);
	}
	printf("%s\n",smin);
	
	return 0;
}
