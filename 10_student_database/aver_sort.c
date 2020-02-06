extern Count;

void aver_sort(struct student students[]) {
	struct student temp;
	//bubble
	int i, j;
	for (i = 0; i < Count-1; i++) {
		for (j = i + 1; j < Count; j++) {
			if (students[i].average < students[j].average) {
				temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}

}
