#include <stdio.h>
#include <stdlib.h>
//读取信息并计算平均分
 
int main(void){
	FILE *fp;
	char name[20];
	int num, score;
	int aver_score = 0;
	double average;
	int i;
	
	if((fp = fopen("12-1.txt","r"))== NULL){
		printf("Failed to open!\n");
		exit(0);
	}
	
	for(i=0; i<5; i++){
		fscanf(fp, "%d%s%d", &num, name, &score);
		aver_score += score; 
		printf("%d %s %d\n", num, name, score);
	}
	
	average = aver_score / 5.0;
	printf("Average score is %.3f\n", average);
	if(fclose(fp)){
		printf("Cant close the file!\n");
		exit(0);
	}
	
	return 0;
}
