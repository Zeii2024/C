#include <stdio.h>
//�ýṹ��洢ѧ����Ϣ
 
//����ѧ����Ϣ�ṹ�� 
struct student{
	int num;
	char name[10];
	int computer, english, math;
	double average;
};

int main(void){
	int n, i;
	struct student s1, max;
	//����ѧ������ 
	printf("Input n:\n");
	scanf("%d",&n);
	printf("Input students' num, name, grades:\n");
	//����ѧ����Ϣ��������ͱȽ�ƽ���� 
	for(i=1; i<=n; i++){
		scanf("%d %s %d %d %d", &s1.num, &s1.name, &s1.computer, &s1.english, &s1.math);
		s1.average = (s1.computer + s1.english + s1.math)/3.0;
		if(i == 1) max = s1;
		if(s1.average > max.average)  //��ƽ��������ѧ������Ϣ���帳ֵ��max 
			max = s1;
	}
	printf("Highest Student num: %d, name: %s, average: %.2lf", max.num, max.name, max.average);
	
	return 0;
}
