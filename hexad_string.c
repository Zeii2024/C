#include <stdio.h>
//���ַ���ת��Ϊ16���ƺ�10����
 
int main(void){
	int i, k;
	int number;
	int str[80], hexad[80];

	//�����ַ���
	printf("Enter your string(end with #):");
	i=0;
	while((str[i] = getchar()) != '#')
		i++;

	str[i] = '\0';  //�����������

	//��ʮ�����Ƶķ��ŷ���hexad
	k=0;
	for(i=0; str[i] !='\0'; i++){
		if(str[i]>='0' && str[i]<='9' || str[i]>='A' && str[i]<='F' ||str[i]>='a' && str[i]<='f' ){
			hexad[k] = str[i];
			k++;
			}
		}
	hexad[k] = '\0';

	//�������ʮ�����Ʒ���
	printf("New string: ");
	for(i=0; hexad[i] != '\0'; i++)
		putchar(hexad[i]);
	printf("\n");

	//ת����ʮ����
	number = 0;
	for(i=0; hexad[i] != '\0'; i++){
		if(hexad[i]>='0' && hexad[i]<='9')
			number = number*16 - '0' + hexad[i];
		else if(hexad[i]>='a' && hexad[i]<='f')
			number = number*16 - 'a' + hexad[i] +10;
		else if(hexad[i]>='A' && hexad[i]<='F')
			number = number*16 - 'A' + hexad[i] +10;
	
	}
	printf("number = %1d \n",number);

	return 0;

}
