#include <stdio.h>
#include "student.h"
#include "input_output.c"
#include "aver_sort.c"
#include "modify.c"

int Count = 0;
int main(void) {
	int op,num;
	struct student students[MAXSIZE];

	printf("Chose your operation:\n");
	printf("1-�½�ѧ����Ϣ��\n2-���ѧ����Ϣ��\n3-��ƽ��������\n4-�޸�ѧ����Ϣ��\n5-��ѯѧ����Ϣ��\n0-�˳���\n");
	scanf("%d", &op);
	if (op < 0 || op>5) {
		printf("Wrong Operation!\n");
		return 0;
	}
	while (op) {
		if(op == 5){
			printf("Enter num:\n");
			scanf("%d", &num);
		}
		switch (op) {
		case 1: new_student(students); break;
		case 2: output_student(students); break;
		case 3: aver_sort(students); break;
		case 4: modify(students); break;
		case 5: search_student(students, num); break;
		}		
		printf("Chose your operation:\n");
		printf("1-�½�ѧ����Ϣ��\n2-���ѧ����Ϣ��\n3-��ƽ��������\n4-�޸�ѧ����Ϣ��\n5-��ѯѧ����Ϣ��\n0-�˳���\n");
		scanf("%d", &op);	
	}
	return 0;
}
