#include <stdio.h>
//将字符串转换为16进制和10进制
 
int main(void){
	int i, k;
	int number;
	int str[80], hexad[80];

	//输入字符串
	printf("Enter your string(end with #):");
	i=0;
	while((str[i] = getchar()) != '#')
		i++;

	str[i] = '\0';  //加入结束符；

	//将十六进制的符号放入hexad
	k=0;
	for(i=0; str[i] !='\0'; i++){
		if(str[i]>='0' && str[i]<='9' || str[i]>='A' && str[i]<='F' ||str[i]>='a' && str[i]<='f' ){
			hexad[k] = str[i];
			k++;
			}
		}
	hexad[k] = '\0';

	//输出所有十六进制符号
	printf("New string: ");
	for(i=0; hexad[i] != '\0'; i++)
		putchar(hexad[i]);
	printf("\n");

	//转换成十进制
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
