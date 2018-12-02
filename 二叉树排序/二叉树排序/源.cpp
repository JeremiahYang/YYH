#include"pch.h"
#include"¶ş²æÊ÷ÅÅĞò.h"
int main(int argc, char** argv) {
	Node_P T = NULL;
	int i, n;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &n);
		Insert_T(T, n);
	}
	traversing(T);
	return 0;
}