#include <stdio.h>
#include <stdlib.h>

//��ƽ���ɼ�����
 
struct student{
	int num;
	char name[10];       //charֻ�ܶ���һ���ַ����ַ���Ҫ����Ϊ���飡�� 
	int computer, english, math;
	double average;
};

int main(void){
	int n, i, j;
	struct student students[20], temp;
	
	//����ѧ������Ϣ���������ڽṹ������ 
	printf("Input n:\n");
	scanf("%d",&n);
 
	for(i=0; i<n; i++){
		printf("Input NO.%d student's information:\n",i+1);
		printf("number:\n");
		scanf("%d",&students[i].num);
		printf("name:\n");
		scanf("%s",&students[i].name);
		printf("computer score:\n");
		scanf("%d",&students[i].computer);
		printf("english score:\n");
		scanf("%d",&students[i].english);
		printf("math score:\n");
		scanf("%d",&students[i].math);
		
		students[i].average = (students[i].computer + students[i].english + students[i].math) /3.0;
	}
	 
	//��ð������ƽ���ɼ�����
	 for(i=0; i<n; i++){
	 	for(j=i+1; j<n; j++){
	 		if(students[j].average > students[i].average){
	 			temp = students[j];
	 			students[j] = students[i];
	 			students[i] = temp;
			 }	
		 }
	 }

	//��������ĳɼ�
	for(i=0; i<n; i++){
		printf("num: %d, name: %s, average: %.2lf.",students[i].num,students[i].name, students[i].average);
		
	} 
	return 0;
}
