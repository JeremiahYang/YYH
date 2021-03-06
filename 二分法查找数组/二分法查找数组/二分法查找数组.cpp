// 二分法查找数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include "pch.h"
#include <iostream>
#include<stdio.h>
//二分法实现数组查找
//非递归算法
int binary(int *a, int key, int n)
{
	int left = 0, right = n - 1, mid = 0;
	mid = (left + right) / 2;
	while (left < right && a[mid] != key)
	{
		if (a[mid] < key) {
			left = mid + 1;
		}
		else if (a[mid] > key) {
			right = mid - 1;
		}
		mid = (left + right) / 2;
	}
	if (a[mid] == key)
		return mid;
	return -1;
}

int main(void)
{
	int b = 0;
	int a[1000];
	
	for ( i = 0; i < b; i++)
	{

	}
	int t,f;
	scanf_s("%d", &t);
	f = binary(a, t, 10);  //非递归算法
	if (f == -1) {
		printf("不存在此数\n");
	}
	else {
		printf("t数组的第%d个元素" ,f + 1);
	}

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
