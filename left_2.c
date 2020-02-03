#include <stdio.h>
#include <string.h>
/*问题描述：
S[0...n-1]是一个长度为n的字符串，定义旋转函数Left(S) = S[1…n-1] + S[0]。比如S="abcd",Left(S)="bcda"。
一个串是对串当且仅当这个串长度为偶数，前半段和后半段一样。比如"abcabc"是对串,"aabbcc"则不是。
现在问题是给定一个字符串，判断他是否可以由一个对串旋转任意次得到。
输入：
第1行：给出一个字符串（字符串非空串，只包含小写字母，长度不超过1000000）
输出：
对于每个测试用例，输出结果占一行，如果能，输出YES，否则输出NO。
样例输入
abcabc
abccba
样例输出
YES
NO
*/ 

 int main(void){
 	int n, flag = 0;
	int i = 0, j; 
 	char s[10000],temp[10000]; 
 	char *p = s;
 	char *q = NULL;
 	
 	printf("输入字符串：\n");
 	scanf("%s",s);
 	//判断是否都是小写 ,或为空 
 	while(s[i] != '\0'){
 		if( s[i]<'a' || s[i]>'z'){
 			printf("输入有误！\n");
 			return 0;
		 }
 		i++;	
	}
	if(s[0] == '\0'){
		printf("输入有误！\n");
 		return 0;
	} 
	 
	n = strlen(s);
	q = &s[n];        //指针q指向s[n] ，值为'\0' 
	 
	//进行旋转  只在这之后做了修改 
	for(i=0; i<=n/2; i++){ //只需要旋转n/2次 
		strcpy(temp, p); 
		for(j=0; j<n/2; j++){      //先判断temp是否是对串 
			if(temp[j] != temp[n/2+j])
				break;//如果不等,则跳出内层for循环 
		}
		printf("i = %d\t", i); //检测i和j是否执行满了 
		printf("j = %d\n", j);
		if(j == n/2) //当 j=n/2时，说明内层循环执行满了，且全部相等 ，即为对串 
			flag = 1;
		//将s[0]依次移到s[n]	
		*q = *p;
		*(q+1) = '\0';
		p++; 
		q++;	
	}
	
	if(flag == 1)
		printf("YES\n");
	else 
		printf("NO\n"); 
		
	return 0;	
 }
