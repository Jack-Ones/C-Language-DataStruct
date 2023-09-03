#ifndef __LINKLIST_WANS__
#define __LINKLIST_WANS__
#define ElemType int
#include <stdbool.h>
#include <stdlib.h>

typedef struct Lnode_s {
	ElemType data;
	struct Lnode_s* next;
}Lnode;

typedef struct LinkList_s {
	Lnode* head, * rear;
}LinkList;
//初始化单链表，带头结点
bool InitLinkList(LinkList* L);
//插入结点
bool AddNode(LinkList * L, int i, ElemType val);
//删除指定结点
bool DeleteNode(LinkList* L, int i);
//查找结点
Lnode* GetNode(LinkList L, int i);
//链表长度
int LinkListLength(LinkList L);
//判断链表是否为空
bool LinkListIsEmpty(LinkList L);
//打印单链表
bool PrintLinkList(LinkList L);
//清空链表，保留头结点
bool ClearLinkList(LinkList* L);
//销毁链表
bool DestroyLinkList(LinkList* L);
#endif // !__LINKLIST_WANS__

