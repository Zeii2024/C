#include <stdio.h>

int main(void) {
	int m, j, sum;	
	long int num;
	int i = 0;
	
	int p;  //û���ô�����ֹ����̨����һ������ 
	
	num = 1;
	while (i < 5) {     //Ϊʲôֻ��ӡ��4������8128�ͽ����ˣ�Ӧ�û���һ�� 33550336 
		sum = 0;
		//����Լ��
		m = num / 2;
		for (j = 1; j <= m; j++) {
			if (num%j == 0)
				sum = sum + j; //����Լ���� 
		}

		//�ж��Ƿ�Ϊ������ 
		if (sum == num) {
			printf("%d\n",num);
			i++;
		}
		num++;
	}
	scanf("%d", &p); //û���ô�����ֹ����̨����һ������ 
	return 0;
}
