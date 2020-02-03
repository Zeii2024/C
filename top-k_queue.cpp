#include <iostream>
#include <ctime>
#include <queue>
#define k 10 
using namespace std;
  

int main(void){
	FILE *fp;
	priority_queue<int, vector<int>, greater<int> > c; //定义优先级队列c 小根堆
	int array[10002] = {0};
	int i = 0, j, cycle=0;
	int len;
	double usedtime;
	clock_t start, end;
	
	//读取文件
	fp = fopen("random.txt", "r");
	i = 0;
	while(!feof(fp)){
		fscanf(fp, "%d", &array[i]);
		i++;
	}
	len = i-1;
	//printf("总共有%d个数\n最大的10个是：\n", len);
	fclose(fp);

	//开始计时和循环
	start = clock();
	for(cycle=0; cycle<1000000; cycle++){
	//清空c
	while(!c.empty())
		c.pop();
	//前十个数赋值给c 
	for(i=0; i<k; i++){
		c.push(array[i]);
	}

	for(j=k; j<len; j++){  //从第十一个数开始遍历 
		if(array[j] > c.top()){
			c.pop(); 		 
			c.push(array[j]);  	
		}
	}
	}
	//输出
	for(i=0; i<k; i++){
		printf("c[%d] = %d\n",i, c.top());
		c.pop();	
	}
	
	//计算运行时间
	end = clock();
	usedtime = (double)(end-start)/CLOCKS_PER_SEC;
	cout << cycle << " circles used time=" << usedtime << endl;
		 
	return 0;
} 

