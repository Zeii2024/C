#include <stdio.h>
//转化为大写
 
int main(void){
	char ch;

	printf("Enter some char:\n");
	ch = getchar();

	while(ch != '\n'){
		if (ch>='a' && ch<='z')
			ch = ch - 'a' + 'A';
		else if(ch>='A' && ch<='Z')
			ch = ch - 'A' + 'a';
		
		putchar(ch);
		ch = getchar();
	}
	printf("\n");

	return 0;
}
