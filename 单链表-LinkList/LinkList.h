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
bool ClearLinkList(LinkList* L);
bool AddNode(LinkList * L, int i, ElemType val);
bool DeleteNode(LinkList* L, int i);
bool GetNode(LinkList L, int i);
int LinkListLength(LinkList L);
bool LinkListIsEmpty(LinkList L);
bool PrintLinkList(LinkList L);
bool DestroyLinkList(LinkList* L);
#endif // !__LINKLIST_WANS__

