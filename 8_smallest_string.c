#include <stdio.h>
#include <string.h>
//最小字符串 strcmp() 
 
int main(void){
	int i;
	char sx[80], smin[80];
	//先输入一个字符串，视作最小的；
	printf("Input 5 strings:\n");
	scanf("%s",sx);
	
	strcpy(smin, sx); 
	for(i=1; i<5; i++){       //边输入边比较，输入一次比较一次，所以只需要两个变量！ 
		scanf("%s",sx);
		if(strcmp(sx, smin) < 0)
			strcpy(smin, sx);
	}
	printf("%s\n",smin);
	
	return 0;
}
