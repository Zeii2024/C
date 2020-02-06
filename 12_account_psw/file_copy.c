#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *f1, *f2;
	char ch;
	//打开文件1 
	if((f1=fopen("user.txt","r"))==NULL){
		printf("Failed to open f1!\n");
		exit(0);
	}
	//新建打开文件2 
	if((f2=fopen("user_copy.txt","w"))==NULL){
		printf("Failed to open f2!\n");
		exit(0);
	}
	while(!feof(f1)){
		ch = fgetc(f1);
		if(ch != EOF)
			fputc(ch, f2);
	}
	//关闭f1 
	if(fclose(f1)){
		printf("Failed to close f1!\n");
		exit(0);
	}
	//关闭f2 
	if(fclose(f2)){
		printf("Failed to close f2!\n");
		exit(0);
	}
	
	return 0;
}
