#include <stdio.h>
#include <string.h>
//ָ�����飬����Ԫ����ָ�� 
int main(void){
	int i;
	char *poem[4] = {"һҶ��������", "��������������", "���˱̲�΢����", "˳ˮ�δ��ſ���"};
	
	char mean[10];
	for(i=0; i<4; i++){
		mean[2*i] = *(poem[i]);   //��Ϊһ������ռ�����ַ������Ժ���"һ"���ڵ�λ���ǣ�poem[0]��poem[0]+1 
		mean[2*i+1] = *(poem[i]+1);  //ͬ����mean[0]��mean[1]��ͬ�洢����"һ"�� 
	} 
	mean[2*i] = '\0';
	printf("%s", mean);
	
	return 0;
}
