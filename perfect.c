#include <stdio.h>

int main(void) {
	int m, j, sum;	
	long int num;
	int i = 0;
	
	int p;  //没有用处，防止控制台程序一闪而过 
	
	num = 1;
	while (i < 5) {     //为什么只打印出4个，到8128就结束了，应该还有一个 33550336 
		sum = 0;
		//求真约数
		m = num / 2;
		for (j = 1; j <= m; j++) {
			if (num%j == 0)
				sum = sum + j; //求真约数和 
		}

		//判断是否为完美数 
		if (sum == num) {
			printf("%d\n",num);
			i++;
		}
		num++;
	}
	scanf("%d", &p); //没有用处，防止控制台程序一闪而过 
	return 0;
}
