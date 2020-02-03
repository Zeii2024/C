#include <stdio.h>

//复数计算 

float real, imag;  //设置全局变量，存放结果；

void complex_add(float real1, float imag1,float real2, float imag2);
void complex_prod(float real1, float imag1,float real2, float imag2);

int main(void){
	float x1, x2, y1, y2;
	int cal;

	printf("Enter the first complex(x1 and y1):\n");
	scanf("%f %f",&x1,&y1);
	printf("Enter the second complex(x2 and y2):\n");
	scanf("%f %f",&x2,&y2);

	printf("Chose add(0) or pro(1):\n");
	scanf("%d",&cal);

	if(cal==0){
		complex_add(x1,y1,x2,y2);
		printf("The add is %.1f + %.1f i.\n",real,imag); //把输出放在这里，函数只负责计算，并将结果赋值给全局变量；
	}
	else if(cal==1){
		complex_prod(x1,y1,x2,y2);
		printf("The add is %.1f + %.1f i.\n",real,imag);
	}
	else
		printf("Wrong!\n");

	return 0;

}

void complex_add(float real1, float imag1,float real2, float imag2){
	//float real, imag;      //把real 和imag设成全局变量，占用的空间较少；

	real = real1 + real2;
	imag = imag1 + imag2;

	//printf("The add is %.1f + %.1f i.\n",real,imag);
	
}
void complex_prod(float real1, float imag1,float real2, float imag2){
	//float real, imag;

	real = real1*real2 - imag1*imag2;
	imag = real1*imag2 + real2*imag1;

	//printf("The add is %.1f + %.1f i.\n",real,imag);
	
}
