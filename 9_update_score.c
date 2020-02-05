#include <stdio.h>
//����ṹ�� 
struct student{
	int num;
	char name[10];
	int computer, english, math;
	double average;
};
int update_score(struct student *p, int n, int num, int course, int score);  //�������º��� 
 
int main(void){
	int n, i, pos;
	int num, course, score;
	
	//����ṹ���飬��ʼ��
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
	
	//����Ҫ���µ�ѧ����Ϣ
	printf("Input the update information:\n");
	printf("number:\n");
	scanf("%d",&num);
	printf("course(1.computer, 2.english, 3.math):\n");
	scanf("%d",&course);
	printf("score:\n");
	scanf("%d",&score);
	
	//���ø��º���
	pos = update_score(students, n, num, course, score); //ʵ���������������׵�ַ��ָ�룩�� 
	
	//������º����Ϣ 
	printf("After update, the information of student NO.%d is:\n", pos+1);
	printf("num: %d, name: %s, average: %.2lf\n", students[pos].num, students[pos].name, students[pos].average); 
	
	return 0;
}

//���º���������ָ�룻�ɹ��򷵻��±�i�����򷵻�-1 
int update_score(struct student *p, int n, int num, int course, int score){ //�����nҲҪ���� ,average����Ҫ���ݣ�ֱ���ں�����ͨ��ָ���޸� 
	int i, pos;
	for(i=0; i<n; i++, p++)  //ע������Ҫ��p++ 
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
