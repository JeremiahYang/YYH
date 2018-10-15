//********************************************************//
//***********本程序于2018.10.08日00:05时由杨一涵完成***********//
//********************************************************//
#include<stdio.h>
#include"TX.h"
int main()
{
	int a=0;
	float s = 0;
	for (;;)
	{
		s = zhengfangxingmianji() + tixingmianji();
		printf("复合图形面积为：%f", s);
		printf("\n按0继续运行，按其他数字退出\n");
		scanf_s("%d", &a);
		if (a == 0)
		{
			printf("继续运行\n");
		}
		else
		{
			break;
		}
	}
	return 0;
}