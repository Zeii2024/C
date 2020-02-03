#include <stdio.h>
#include <math.h>

//用展开式估算pi值
 
double funpi(double e);
int main(void){

	double pi,e;

	printf("Enter e:\n");
	scanf("%lf",&e);
	
	pi = funpi(e);
	
	printf("pi is %f\n",pi);
	return 0;


}

double funpi(double e){
	int flag = 1;
	double n = 1.0, item = 1.0;
	double pi4 = 0.0;

	while(fabs(item)>=e){
		item = flag *1.0/n;
		pi4 = item + pi4;
		n = n+2;
		flag = -flag;
	}

	return pi4*4;

}
