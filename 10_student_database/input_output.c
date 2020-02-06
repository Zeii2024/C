extern Count;

void new_student(struct student students []){
	int i,  n, index;

	if (Count == MAXSIZE) {
		printf("The array is FULL!\n");
		return;
	}
	index = Count;   //利用index可以从上次输到的地方开始输入
	printf("Input the number of students:\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Input the num:\n");
		scanf("%d", &students[index].num);
		printf("Input the name:\n");
		scanf("%s", &students[index].name);
		printf("Input the Computer score:\n");
		scanf("%d", &students[index].computer);
		printf("Input the English score:\n");
		scanf("%d", &students[index].english);
		printf("Input the Math score:\n");
		scanf("%d", &students[index].math);

		students[index].average = (students[index].computer + students[index].english + students[index].math) / 3.0;

		index++;
		Count++;
	}
}

void output_student(struct student students[]) {
	int i;
	
	if (Count == 0) {
		printf("The array is EMPTY!\n");
		return;
	}
	printf("num  name  computer  english  math  average\n");
	for (i = 0; i < Count; i++) {
		printf("%d \t", students[i].num);
		printf("%s \t", students[i].name);
		printf("%d \t", students[i].computer);
		printf("%d \t", students[i].english);
		printf("%d \t", students[i].math);
		printf("%.2f \t\n", students[i].average);
	}
}
