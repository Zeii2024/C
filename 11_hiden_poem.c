#include <stdio.h>
#include <string.h>
//指针数组，数组元素是指针 
int main(void){
	int i;
	char *poem[4] = {"一叶轻舟向东流", "帆梢轻握杨柳手", "风纤碧波微起舞", "顺水任从雅客悠"};
	
	char mean[10];
	for(i=0; i<4; i++){
		mean[2*i] = *(poem[i]);   //因为一个汉字占两个字符，所以汉字"一"所在的位置是，poem[0]和poem[0]+1 
		mean[2*i+1] = *(poem[i]+1);  //同样的mean[0]和mean[1]共同存储汉字"一"。 
	} 
	mean[2*i] = '\0';
	printf("%s", mean);
	
	return 0;
}
