#include "LinkList.h"
#include <stdio.h>
//初始化单链表，带头结点
bool InitLinkList(LinkList* L) {
	L->head = (Lnode*)calloc(1, sizeof(Lnode));
	L->rear = L->head;
	return true;
}

//在第i个结点前插入结点
bool AddNode(LinkList* L, int i, ElemType val) {
	int length = LinkListLength(*L);
	if (i<1) {
		printf("i is wrong ->AddNode(&L,i,val)\n");
		exit(1);
	}
	//大于链表长度的结点插入到链表尾部
	else if (i > length) {
		Lnode * p = (Lnode*)calloc(1, sizeof(Lnode));
		p->data = val;
		L->rear->next = p;
		p->next = NULL;
		L->rear = p;
		return true;
	}
	//在单链表中间
	else {
		Lnode* pre = GetNode(*L, i - 1);
		Lnode* p = (Lnode*)calloc(1, sizeof(Lnode));
		p->data = val;
		p->next = pre->next;
		pre->next = p;
		return true;
	}
}
//删除指定结点
bool DeleteNode(LinkList* L, int i) {
	int length = LinkListLength(*L);
	if (i < 1||i>length) {
		printf("i is wrong ->DeleteNode(&L,i)\n");
		exit(1);
	}
	else if (i = length) {
		Lnode* pre = GetNode(*L, i - 1);
		pre->next = NULL;
		free(L->rear);
		L->rear = pre;
		return true;
	}
	//在单链表中间
	else {
		Lnode* pre = GetNode(*L, i - 1);
		Lnode* p = pre->next;
		pre->next = p->next;
		free(p);
		return true;
	}
}
//查找结点
Lnode* GetNode(LinkList L, int i) {
	int length = LinkListLength(L);
	if (i < 0||i>length) {
		printf("i is wrong ->GetNode(L,i)\n");
		exit(1);
	}
	Lnode* p = L.head;
	for (; i > 0; i--) {
		p = p->next;
	}
	return p;
}
//链表长度
int LinkListLength(LinkList L) {
	Lnode* p = L.head;
	int length = 0;
	while (p != L.rear) {
		p=p->next;
		length++;
	}
	return length;
}
//判断链表是否为空
bool LinkListIsEmpty(LinkList L) {
	if (L.rear == L.head) {
		return true;
	}
	else
	{
		return false;
	}
}
//打印单链表
bool PrintLinkList(LinkList L) {
	if (LinkListIsEmpty(L)) {
		printf("Nothing print!The Linklist is Empty!\n");
		return false;
	}
	Lnode* p = L.head->next;
	while (p!=NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("NULL\n");
	return true;
}
//清空链表，保留头结点
bool ClearLinkList(LinkList* L) {
	int length = LinkListLength(*L);
	while (length) {
		DeleteNode(L, length);
		length--;
	}
	return true;
}
//销毁链表
bool DestroyLinkList(LinkList* L) {
	ClearLinkList(L);
	free(L->head);
	return true;
}