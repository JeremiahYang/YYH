#include "stack.h"
#include<stdio.h>

int InitStack(SqStack & S)
{
	S.base = (int *)malloc(100 * sizeof(int));
	S.top = S.base;
	S.stackSize = 100;
	S.dataSize = 0;
	return 1;
}

int Push(SqStack & S, int e)
{
	if (S.top-S.base>99||S.dataSize>=99)
	{
		printf("栈已满，不能入站");
		return 0;
	}
	*S.top = e;
	S.top = S.top + 1;
	S.dataSize++;
	return 1;
}

int Pop(SqStack & S, int & e)
{
	if (S.top==S.base||S.dataSize==0)
	{
		printf("栈已空，没有值");
		return 0;
	}
	S.top--;
	e = *S.top;
	S.dataSize--;
	return 0;
}
