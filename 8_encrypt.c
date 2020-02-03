#include <stdio.h>
#include <string.h>
#define MAXLINE 100   //常量定义和赋值，没有等号没有分号 
//将字符串向后取一位
 
void encrypt(char *);  //定义一个指针对数组内的所有元素进行操作 
int main(void){
	char line[MAXLINE];
	
	printf("Enter the string:");
	gets(line);     //字符串的输入 
	
	encrypt(line);
	
	printf("After being encrypted: \n %s%s\n",line);
	
	return 0;
}

void encrypt(char *s){
	
	for(; *s != '\0'; s++){
		if(*s == 'z')
			*s = 'a';
		else
			*s = *s + 1; //字符加一，相当于取后面一位字母 
	}
}
