#include <stdio.h>
#include <math.h>
#define PI 3.141592654
//计算几何体的体积
 
//声明函数 
void cal(int select);
double vol_ball(void);
double vol_cylind(void);
double vol_cone(void);

//主函数，输入select
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

//cal函数，对几何体进行选择，并输出结果
void cal(int select){
	switch (select){
		case 1: printf("The ball's volume is %.2lf.\n", vol_ball());
				break;                                                      //时刻记得break; 
		case 2: printf("The cylind's volume is %.2lf.\n", vol_cylind());
				break;
		case 3: printf("The cone's volume is %.2lf.\n", vol_cone());
				break;
	}
}
//vol_ball 计算球的体积，输入并返回 
double vol_ball(void){
	double r, vol;
	
	printf("Enter r:\n");
	scanf("%lf", &r);
	
	vol = 4.0/3.0 * PI * r * r * r;
	return vol;
}
//vol_cylind 计算圆柱的体积，输入并返回 
double vol_cylind(void){
	double r, h, vol;
	
	printf("Enter r:\n");	
	scanf("%lf", &r);
	printf("Enter h:\n");
	scanf("%lf", &h);
	
	vol =  PI * r * r * h;
	return vol;
}
//vol_cone 计算圆锥的体积，输入并返回 
double vol_cone(void){
	double r, h, vol;
	
	printf("Enter r:\n");
	scanf("%lf", &r);
	printf("Enter h:\n");
	scanf("%lf", &h);
	
	vol = PI * r * r * h / 3.0;
	return vol;
}
