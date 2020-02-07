#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//利用strstr,从字符串s1中找到并删除字符串s2，例如Thisisatest，中删除is，输出结果是Thatest 
int main(void){
	char s1[80], s2[20];
	char *p = s1;
	char *c = NULL;
	char *h = s1; 
	char pre[80];
	int index = 0;//第一次循环的时候，pre是空的,所以用strcpy 
	
	printf("输入s1:\n");
	scanf("%s", s1);
	printf("输入s2:\n");
	scanf("%s", s2);
	 
	
	while(strstr(p, s2)){		
	p = strstr(p, s2);
	c = p;   //先用C把P保存一下，然后将P指向的字符换成'\0'，让此时的S1赋值给h，s1为：Th\0sisatest.所以读取h时只读出Th 
	*p = '\0';
	h = s1; 

	if(!index){   //第一次循环式index为0，其余时候都为1 .当pre为空时，pre[0]应该是'\0'，所以不能直接用连接strcat(). 
		strcpy(pre,h);
		index = 1;
	}else
		strcat(pre,h); //后面的循环就用strcat了 
		
	*p = *c;//再将p还原 
	p =  p+strlen(s2); //p向后移动s2个长度，相当于删掉一个s2字符 
	p = strcpy(s1,p);//只用strcpy(s1,p)时，p的值付给s1后，p变成了空，不知道为什么，所以前边在加上一个p =  
	}
	if(p != NULL) //最后p不为空时，循环结束，直接将p连接到pre后面，输出pre即可 
		strcat(pre, p);
	printf("%s\n", pre);
	
	return 0;
}
