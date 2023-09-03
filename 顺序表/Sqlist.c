#include "Sqlist.h"
#include <stdio.h>
#include <string.h>
//初始化一个空的顺序表
void InitSqlist(Sqlist* L) {
	memset(L->data,0, MaxSize_100);
	L->length = 0;
}

//按值在顺序表查找元素返回位置
//若找到返回下标位置
//若没有找到返回-1
int LocateElem(Sqlist L, ElemType val) {
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == val) {
			return i;
		}
	}
	return -1;
}

//按照位置查找元素，返回元素值
ElemType GetElem(Sqlist L, int i) {
	if (i < 0 || i >=L.length) {
		printf("int i is wrong->GetElem(L,i)\n");
		exit(1);
	}
	else {
		return L.data[i];
	}
}
//在顺序表指定位置插入元素值
bool SqlistInsert(Sqlist* L, int i, ElemType val) {
	if (i < 0 || i >L->length) {
		printf("int i is wrong->SqlistInsert(&L,i,val)\n");
		exit(1);
	}
	else {
		for (int j = L->length; j > i; j--) {
			L->data[j] = L->data[j - 1];
		}
		L->data[i] = val;
		L->length++;
		return true;
	}
}
//删除顺序表指定位置的元素
ElemType SqlistDelete(Sqlist* L, int i) {
	if (i < 0 || i >= L->length) {
		printf("int i is wrong->SqlistInsert(&L,i,val)\n");
		exit(1);
	}
	else {
		for (int j = i; j <L->length-1; j++) {
			L->data[j] = L->data[j + 1];
		}
		L->data[L->length-1] =0;
		L->length--;
		return true;
	}
}
//打印顺序表的所有元素
bool PrintSqlist(Sqlist L) {
	if (SqlistIsEmpty(L)) {
		printf("Nothing print!The Sqlist is Empty!\n");
		return false;
	}
	else
	{
		for (int i=0; i < L.length; i++) {
			printf("%d ", L.data[i]);
		}
		printf("\n");
		return true;
	}
}
//判断顺序表的元素是否为空
bool SqlistIsEmpty(Sqlist L) {
	if (L.length == 0) {
		return true;
	}
	else
	{
		return false;
	}
}
//销毁顺序表
bool DestroySqlist(Sqlist* L) {
	memset(L->data, 0, L->length);
	L->length = 0;
	return true;
}
