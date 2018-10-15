#include<iostream>
#include"stack.h"
int main()
{
	SqStack q;
	InitStack(q);
	int n[3];
	Push(q, 12);
	Push(q, 13);
	Push(q, 14);

	Pop(q, n[0]);
	Pop(q, n[1]);
	Pop(q, n[2]);
	printf("%d %d %d\n", n[0], n[1], n[2]);
	
}