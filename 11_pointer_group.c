#include <stdio.h>
#include <string.h>
//��������ָ����ַ�������������� 
void fsort(char *color[], int n);

int main(void){
	int i;
	char *pcolor[] = {"red", "blue", "yellow", "green", "black"};
	
	fsort(pcolor, 5);
	
	for(i=0; i<5; i++){
		printf("%s\t", pcolor[i]);
	}
	return 0;
}

void fsort(char *color[], int n){
	int j, k;
	char *temp;
	//ð���Ÿ��� 
	for(j=1; j<n; j++){
		for(k=0; k<n-j; k++){
			if(strcmp(color[k], color[k+1]) >0){
				temp = color[k];
				color[k] = color[k+1];
				color[k+1] = temp;
			}
		}
	}
}
