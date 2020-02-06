extern Count;

void modify(struct student *p) {
	int num, course, i, score;
	int flag = 0; //用来判断是否找到 
	
	if(Count == 0){
		printf("The array is EMPTY!\n");
		return;
	}

	printf("Input the num of student to modify:\n");
	scanf("%d", &num);
	printf("Input the course (1-computer, 2-english, 3-math):\n");
	scanf("%d", &course);
	printf("Input the score:\n");
	scanf("%d", &score);

	for (i = 0; i < Count; i++, p++) {
		if (p->num == num) {
			flag = 1;
			printf("The previus NO.%d student: name: %s, computer: %d, english: %d, math: %d, average: %.2f.\n",
						p->num, p->name, p->computer, p->english, p->math, p->average);
			switch (course) {
				case 1: p->computer = score; break;
				case 2: p->english = score; break;
				case 3: p->math = score; break;
				}
			p->average = (p->computer + p->english + p->math) / 3.0;
			break;//已找到并修改 
		}
	}
	if (flag){
		printf("\nModify succesfully. NO.%d student: name: %s, computer: %d, english: %d, math: %d, average: %.2f.\n",
			p->num, p->name, p->computer, p->english, p->math, p->average);
		}
	else
		printf("NOT found!\n");
}

void search_student(struct student students[], int num) {
	int i, flag;

	if (Count == 0) {
		printf("The array is EMPTY!\n");
		return;
	}
		
	for (i = 0; i < Count; i++) {
		if (students[i].num == num){ 
			flag = 1;
			break;
			} 
	}
	if (flag) {
		printf("The information of NO.%d student are:\n", num);
		printf("name: %s\n", students[i].name);
		printf("computer score: %d\n", students[i].computer);
		printf("english score: %d\n", students[i].english);
		printf("math score: %d\n", students[i].math);
		printf("average score: %.2f\n", students[i].average);
	}
	else
		printf("NOT found!\n");
}
