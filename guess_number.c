#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int number, random;
	int count=0;

	srand(time(0));
	random=rand()%10+1;          //����һ��1��10���������

	printf("��һ����:\n");
	scanf("%d",&number);

	do{
		if(number<1||number>10){ 
			printf("��Ĳ���Ŷ!\n");
			break; 
		} 
		else if(number==random){
			printf("��¶���!\n");
			break;
		}
		else{
			if(number>random) printf("̫����\n");
			else printf("̫С��\n");

			printf("����һ��:\n");
			scanf("%d",&number);
		}
		count++;
	}while(count<3);

	return 0;
}
