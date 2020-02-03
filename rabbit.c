#include <stdio.h>

int main(void){

	int rabbit,n,i,month;

	printf("输入兔子总数：\n");
	scanf("%d",&n);

	rabbit =1;
	month = 0;

	while(rabbit<n){
		rabbit = rabbit*2;
		month +=3;
	}
	
	printf("总共需要%d月，兔子变成%d对.\n",month,rabbit);

	return 0;
}