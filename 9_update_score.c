#include <stdio.h>
//定义结构体 
struct student{
	int num;
	char name[10];
	int computer, english, math;
	double average;
};
int update_score(struct student *p, int n, int num, int course, int score);  //声明更新函数 
 
int main(void){
	int n, i, pos;
	int num, course, score;
	
	//定义结构数组，初始化
	struct student students[20];
	
	printf("Input n:\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Input the information of student NO.%d.\n",i+1);
		printf("number:\n");
		scanf("%d", &students[i].num);
		printf("name:\n");
		scanf("%s", &students[i].name);
		printf("Computer score:\n");
		scanf("%d", &students[i].computer);
		printf("English score:\n");
		scanf("%d", &students[i].english);
		printf("Math score:\n");
		scanf("%d", &students[i].math);
		
		students[i].average = (students[i].computer + students[i].english + students[i].math)/3.0;
	}
	printf("Done!");
	
	//输入要更新的学生信息
	printf("Input the update information:\n");
	printf("number:\n");
	scanf("%d",&num);
	printf("course(1.computer, 2.english, 3.math):\n");
	scanf("%d",&course);
	printf("score:\n");
	scanf("%d",&score);
	
	//调用更新函数
	pos = update_score(students, n, num, course, score); //实参是数组名，即首地址（指针）； 
	
	//输出更新后的信息 
	printf("After update, the information of student NO.%d is:\n", pos+1);
	printf("num: %d, name: %s, average: %.2lf\n", students[pos].num, students[pos].name, students[pos].average); 
	
	return 0;
}

//更新函数，利用指针；成功则返回下标i，否则返回-1 
int update_score(struct student *p, int n, int num, int course, int score){ //这里的n也要传递 ,average不需要传递，直接在函数中通过指针修改 
	int i, pos;
	for(i=0; i<n; i++, p++)  //注意这里要有p++ 
		if(p->num == num)
			break;
	
	if(i<n){
		switch(course){
			case 1: p->computer = score;
			case 2: p->english = score;
			case 3: p->math = score;
		}
		pos = i;
		p->average = (p->computer + p->english + p->math)/3.0;
	}
	else
		pos = -1;
		
	return pos;
}
