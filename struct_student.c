#include <stdio.h>
//用结构体存储学生信息
 
//定义学生信息结构体 
struct student{
	int num;
	char name[10];
	int computer, english, math;
	double average;
};

int main(void){
	int n, i;
	struct student s1, max;
	//输入学生数量 
	printf("Input n:\n");
	scanf("%d",&n);
	printf("Input students' num, name, grades:\n");
	//输入学生信息，并计算和比较平均分 
	for(i=1; i<=n; i++){
		scanf("%d %s %d %d %d", &s1.num, &s1.name, &s1.computer, &s1.english, &s1.math);
		s1.average = (s1.computer + s1.english + s1.math)/3.0;
		if(i == 1) max = s1;
		if(s1.average > max.average)  //将平均分最大的学生的信息整体赋值给max 
			max = s1;
	}
	printf("Highest Student num: %d, name: %s, average: %.2lf", max.num, max.name, max.average);
	
	return 0;
}
