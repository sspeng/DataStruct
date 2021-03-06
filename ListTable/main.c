/*************************************************************************
	> File Name: main.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 12 Apr 2017 02:16:32 AM PDT
 ************************************************************************/

#include <stdio.h>
#include <vld.h>
#include "ListTable.h"

int main()
{
	ListTable* pListHead;
	InitList(&pListHead);
	PrintList(pListHead);

	for (int i = 1; i <= 10; ++i)
		ListInsert(pListHead, i, i);

	rPrintList(pListHead);
	ListInsert(pListHead, 3, 30);
	PrintList(pListHead);


	DataType e;
	GetElem(pListHead, 3, &e);

	e = 10;
	int pos = FindElem(pListHead, e);

	ListDelete(pListHead, 11, &e);
	ClearList(&pListHead);

	return 0;
}
