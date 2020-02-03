#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int number, random;
	int count=0;

	srand(time(0));
	random=rand()%10+1;          //生成一个1到10的随机数；

	printf("猜一个数:\n");
	scanf("%d",&number);

	do{
		if(number<1||number>10){ 
			printf("输的不对哦!\n");
			break; 
		} 
		else if(number==random){
			printf("你猜对了!\n");
			break;
		}
		else{
			if(number>random) printf("太大了\n");
			else printf("太小了\n");

			printf("再输一遍:\n");
			scanf("%d",&number);
		}
		count++;
	}while(count<3);

	return 0;
}
