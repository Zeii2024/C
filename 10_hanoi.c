#include <stdio.h>
//��ŵ�� 
void hanio(int n, char a, char b,char c);

int main(void){
	int n;
	char a='a', b='b', c='c';
	
	printf("Enter n:\n");
	scanf("%d", &n);
	
	hanio(n, a, b, c);
	
	return 0;
}
//�ݹ�ʵ�ֺ�ŵ��
void hanio(int n, char a, char b, char c){
	if(n == 1)
		printf("%c --> %c\n",a,b);
	else{
		hanio(n-1, a, c, b);    //ע������ı����a b cʵ�ε�˳�� 
		printf("%c --> %c\n",a,b);
		hanio(n-1, c, b, a);
	}	
}
