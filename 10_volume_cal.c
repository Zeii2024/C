#include <stdio.h>
#include <math.h>
#define PI 3.141592654
//���㼸��������
 
//�������� 
void cal(int select);
double vol_ball(void);
double vol_cylind(void);
double vol_cone(void);

//������������select
int main(void){
	int select;
	
	while(1){
		printf("Select the type:\n 1-ball\n 2-cylind\n 3-cone\n");
		printf("Other enter means QUIT.\n");
		scanf("%d", &select);
		
		if(select >3 || select < 1)
			break;
		else
			cal(select);	
	}		
	return 0;
} 

//cal�������Լ��������ѡ�񣬲�������
void cal(int select){
	switch (select){
		case 1: printf("The ball's volume is %.2lf.\n", vol_ball());
				break;                                                      //ʱ�̼ǵ�break; 
		case 2: printf("The cylind's volume is %.2lf.\n", vol_cylind());
				break;
		case 3: printf("The cone's volume is %.2lf.\n", vol_cone());
				break;
	}
}
//vol_ball ���������������벢���� 
double vol_ball(void){
	double r, vol;
	
	printf("Enter r:\n");
	scanf("%lf", &r);
	
	vol = 4.0/3.0 * PI * r * r * r;
	return vol;
}
//vol_cylind ����Բ������������벢���� 
double vol_cylind(void){
	double r, h, vol;
	
	printf("Enter r:\n");	
	scanf("%lf", &r);
	printf("Enter h:\n");
	scanf("%lf", &h);
	
	vol =  PI * r * r * h;
	return vol;
}
//vol_cone ����Բ׶����������벢���� 
double vol_cone(void){
	double r, h, vol;
	
	printf("Enter r:\n");
	scanf("%lf", &r);
	printf("Enter h:\n");
	scanf("%lf", &h);
	
	vol = PI * r * r * h / 3.0;
	return vol;
}
