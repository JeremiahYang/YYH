// 二叉树排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include"pch.h"



int Insert_T(Node_P &T, int data) {
	Node_P temp, temp_parents;
	if (T == NULL) {//如果树为空 
		T = (Node_P)malloc(sizeof(struct Node));
		T->data = data;
		T->rchild = NULL;
		T->lchild = NULL;
		printf("根节点的数据%d\n", T->data);
		return 0;
	}
	temp = T;
	temp_parents = T;
	while (temp != NULL) {
		if (data > temp->data) {
			temp_parents = temp;
			temp = temp->rchild;
		}
		else {
			temp_parents = temp;
			temp = temp->lchild;
		}
	}

	if (data > temp_parents->data) {
		temp_parents->rchild = (Node_P)malloc(sizeof(struct Node));
		temp_parents->rchild->data = data;
		temp_parents->rchild->lchild = NULL;
		temp_parents->rchild->rchild = NULL;
		printf("右孩子%d需要插入的双亲节点的数据%d\n", data, temp_parents->data);
	}
	else {
		temp_parents->lchild = (Node_P)malloc(sizeof(struct Node));
		temp_parents->lchild->data = data;
		temp_parents->lchild->lchild = NULL;
		temp_parents->lchild->rchild = NULL;
		printf("左孩子%d需要插入的双亲节点的数据%d\n", data, temp_parents->data);
	}

	return 0;

}
void traversing(Node_P T) {
	Node_P p;
	p = T;
	if (p->lchild != NULL)//如果左孩子不为空，遍历其左子	
	{
		traversing(p->lchild);
	}
	printf("4%d", p->data);
	if (p->rchild != NULL)
	{
		traversing(p->rchild);
	}
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
