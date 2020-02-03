#include <stdio.h>
//Êý×Ö½ð×ÖËþ
 
void py(int n);
int main(void){
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);

	py(n);

	return 0;
}

void py(int n){
	int i, j, k;

	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		
		for(k=0;k<i;k++)
			printf(" %d",i);
		
		printf("\n");
	}

}
