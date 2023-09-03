#include "Sqlist.h"
#include <stdio.h>
#include <string.h>
//初始化一个空的顺序表
void InitSqlist(Sqlist* L) {
	memset(L->data,0, MaxSize_100);
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
	if (i < 0 || i >= L.length) {
		printf("int i is wrong->GetElem(L,i)");
		exit(1);
	}
	else {
		return L.data[i];
	}
}
//在顺序表指定位置插入元素值
bool SqlistInsert(Sqlist* L, int i, ElemType val) {

}
//删除顺序表指定位置的元素
ElemType SqlistDelete(Sqlist* L, int i);
//打印顺序表的所有元素
bool PrintSqlist(Sqlist L);
//判断顺序表的元素是否为空
bool IsEmpty(Sqlist L);
//销毁顺序表
bool DestroySqlist(Sqlist* L);
