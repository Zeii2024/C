#include <stdio.h>

int main(void){

	int rabbit,n,i,month;

	printf("��������������\n");
	scanf("%d",&n);

	rabbit =1;
	month = 0;

	while(rabbit<n){
		rabbit = rabbit*2;
		month +=3;
	}
	
	printf("�ܹ���Ҫ%d�£����ӱ��%d��.\n",month,rabbit);

	return 0;
}