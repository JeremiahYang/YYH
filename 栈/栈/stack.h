#include<stdlib.h>

typedef struct {
	int *base;//栈底
	int *top;//栈顶
	int stackSize;//栈长度
	int dataSize;//数据长度
}SqStack;
//初始化栈
int InitStack(SqStack &S);

//入栈
int Push(SqStack &S, int e);

//出栈
int Pop(SqStack &s, int &e);
