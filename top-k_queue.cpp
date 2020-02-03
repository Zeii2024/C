#include <iostream>
#include <ctime>
#include <queue>
#define k 10 
using namespace std;
  

int main(void){
	FILE *fp;
	priority_queue<int, vector<int>, greater<int> > c; //�������ȼ�����c С����
	int array[10002] = {0};
	int i = 0, j, cycle=0;
	int len;
	double usedtime;
	clock_t start, end;
	
	//��ȡ�ļ�
	fp = fopen("random.txt", "r");
	i = 0;
	while(!feof(fp)){
		fscanf(fp, "%d", &array[i]);
		i++;
	}
	len = i-1;
	//printf("�ܹ���%d����\n����10���ǣ�\n", len);
	fclose(fp);

	//��ʼ��ʱ��ѭ��
	start = clock();
	for(cycle=0; cycle<1000000; cycle++){
	//���c
	while(!c.empty())
		c.pop();
	//ǰʮ������ֵ��c 
	for(i=0; i<k; i++){
		c.push(array[i]);
	}

	for(j=k; j<len; j++){  //�ӵ�ʮһ������ʼ���� 
		if(array[j] > c.top()){
			c.pop(); 		 
			c.push(array[j]);  	
		}
	}
	}
	//���
	for(i=0; i<k; i++){
		printf("c[%d] = %d\n",i, c.top());
		c.pop();	
	}
	
	//��������ʱ��
	end = clock();
	usedtime = (double)(end-start)/CLOCKS_PER_SEC;
	cout << cycle << " circles used time=" << usedtime << endl;
		 
	return 0;
} 

