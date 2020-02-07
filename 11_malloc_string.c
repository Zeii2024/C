#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//用动态分配内存的方法处理多个字符串的输入 
int main(void){
	int i, j, n;
	char *color[10], str[15];
	
	printf("Input some color:(End with #)\n");
	scanf("%s",str);
	
	n = 0;
	while(str[0] != '#'){
		color[n] = (char *)malloc(sizeof(char) * (strlen(str) + 1)); //分配内存的大小,+1是因为字符串以'\0'结尾 
		strcpy(color[n], str); //注意字符串的赋值 
		
		n++;
		scanf("%s",str);	 
	}
	
	printf("These words are:\n");
	for(i=n-1; i>=0; i--){
		printf("%s\t", color[i]);
	}
	free(*color); //有malloc，就要有free 
	return 0;
}
