#include <stdio.h>
//输入日期，输出该日期是这一年的第几天
 
int day_of_year(int year,int month, int day);

int main(void){

	int year, month, day;
	//int result;
	printf("Enter the date(year month day):");
	scanf("%d %d %d",&year, &month, &day);

	//result = day_of_year(year,month,day);
	printf("%d\n",day_of_year(year,month,day));

	return 0;

}

int day_of_year(int year,int month, int day){

	int i,leap;
	int tap[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};

	//判断闰年
	leap = (year%4==0 && year%100!=0||year%400==0);

	for(i=0; i<month; i++)
		day = tap[leap][i] + day;

	return day;


}
