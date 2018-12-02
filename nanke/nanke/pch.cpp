// pch.cpp: 与预编译标头对应的源文件；编译成功所必需的

#include "pch.h"
int HuffmanCoding(Huffmantree &HT, HuffmanCode &HC, int *w, int n)
{

	if (n<=1)
	{
		return;
	}
	m = 2 * n - 1;
	HT = (HuffmanCode)malloc((m + 1) * sizeof(HTNode));
	for (p = HT,i=1; i < n; ++i,++p,++w)
	{
		*p = { *w,0,0,0 };
	}
}
// 一般情况下，忽略此文件，但如果你使用的是预编译标头，请保留它。
