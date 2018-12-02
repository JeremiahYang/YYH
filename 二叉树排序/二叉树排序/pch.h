// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H
#include <stdlib.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Node {
	int data;
	struct Node *lchild, *rchild;
}Node_T, *Node_P;
//Node_T 结构体
//Node_P 是Node_T的指针类型 
int Insert_T(Node_P &T, int data);
void traversing(Node_P T);

// TODO: 添加要在此处预编译的标头

#endif //PCH_H
