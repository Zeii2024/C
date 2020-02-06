#include <stdio.h>
//汉诺塔 
void hanio(int n, char a, char b,char c);

int main(void){
	int n;
	char a='a', b='b', c='c';
	
	printf("Enter n:\n");
	scanf("%d", &n);
	
	hanio(n, a, b, c);
	
	return 0;
}
//递归实现汉诺塔
void hanio(int n, char a, char b, char c){
	if(n == 1)
		printf("%c --> %c\n",a,b);
	else{
		hanio(n-1, a, c, b);    //注意这里改变的是a b c实参的顺序 
		printf("%c --> %c\n",a,b);
		hanio(n-1, c, b, a);
	}	
}
