//*****************************************************
//*********本程序由胡宇昂@2018年10月11日23：28完成*****
//*****************************************************
#include"base.h"
int search(int month,int day,int p)
{
	int a[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
	int b[12] = { 0,31,60,91,121,152,182,213,244,274,305,335 };
	int sum=1,sum1=0;
	printf("please input month,day(like 10 01):");
	scanf_s("%d %d", &month, &day);
	if ((day > p && (month == 2)||(month > 12 || day > 31)))/*the day (day>29) in February is not exist!*/
	{		
		printf("the day is not exist!");
		return 0;
	}
	else
	{
		sum = a[month - 1] + day;//平年
		sum1 = b[month - 1] + day; //闰年
	}
	if (p==29)
	{
		return printf("一年的第%d天！\n", sum1);
	}
	else if (p==28)
	{
		return printf("一年的第%d天！\n", sum);
	}
}
