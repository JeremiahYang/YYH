#include<stdlib.h>

typedef struct {
	int *base;//ջ��
	int *top;//ջ��
	int stackSize;//ջ����
	int dataSize;//���ݳ���
}SqStack;
//��ʼ��ջ
int InitStack(SqStack &S);

//��ջ
int Push(SqStack &S, int e);

//��ջ
int Pop(SqStack &s, int &e);
