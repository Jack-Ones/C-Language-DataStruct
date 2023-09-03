#ifndef __SQLIST_WANS__
#define __SQLIST_WANS__
#define ElemType int
#define MaxSize_100 100
#include <stdbool.h>

typedef struct Sqlist_s {
	ElemType data[MaxSize_100];
	int length;
}Sqlist;
//初始化一个空的顺序表
void InitSqlist(Sqlist * L);
//按值在顺序表查找元素返回位置
int LocateElem(Sqlist L, ElemType val);
//按照位置查找元素，返回元素值
ElemType GetElem(Sqlist L, int i);
//在顺序表指定位置插入元素值
bool SqlistInsert(Sqlist* L, int i,ElemType val);
//删除顺序表指定位置的元素
ElemType SqlistDelete(Sqlist* L, int i);
//打印顺序表的所有元素
bool PrintSqlist(Sqlist L);
//判断顺序表的元素是否为空
bool SqlistIsEmpty(Sqlist L);
//销毁顺序表
bool DestroySqlist(Sqlist* L);

#endif // __SQLIST_WANS__

