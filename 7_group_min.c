#include <stdio.h>
//�����������С����
 
int main(void){
	int n, i,temp,flag;
	int a[10];          //������������ǰ�棡������

	printf("Enter n:\n");
	scanf("%d",&n);

	flag = 0;
	printf("Enter %d numbers:\n",n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
		
		if(a[flag]>a[i])
			flag = i;
	}
	printf("The minmum is %d\n",a[flag]);

	temp = a[0];
	a[0] = a[flag];
	a[flag] = temp;

	for(i=0; i<n; i++)
		printf("  %d",a[i]);
	
	printf("\n");
	
	return 0;
}
