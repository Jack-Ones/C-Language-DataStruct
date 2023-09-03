#include "LinkList.h"
#include <stdio.h>
//��ʼ����������ͷ���
bool InitLinkList(LinkList* L) {
	L->head = (Lnode*)calloc(1, sizeof(Lnode));
	L->rear = L->head;
	return true;
}

//�ڵ�i�����ǰ������
bool AddNode(LinkList* L, int i, ElemType val) {
	int length = LinkListLength(*L);
	if (i<1) {
		printf("i is wrong ->AddNode(&L,i,val)\n");
		exit(1);
	}
	//���������ȵĽ����뵽����β��
	else if (i > length) {
		Lnode * p = (Lnode*)calloc(1, sizeof(Lnode));
		p->data = val;
		L->rear->next = p;
		p->next = NULL;
		L->rear = p;
		return true;
	}
	//�ڵ������м�
	else {
		Lnode* pre = GetNode(*L, i - 1);
		Lnode* p = (Lnode*)calloc(1, sizeof(Lnode));
		p->data = val;
		p->next = pre->next;
		pre->next = p;
		return true;
	}
}
//ɾ��ָ�����
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
	//�ڵ������м�
	else {
		Lnode* pre = GetNode(*L, i - 1);
		Lnode* p = pre->next;
		pre->next = p->next;
		free(p);
		return true;
	}
}
//���ҽ��
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
//������
int LinkListLength(LinkList L) {
	Lnode* p = L.head;
	int length = 0;
	while (p != L.rear) {
		p=p->next;
		length++;
	}
	return length;
}
//�ж������Ƿ�Ϊ��
bool LinkListIsEmpty(LinkList L) {
	if (L.rear == L.head) {
		return true;
	}
	else
	{
		return false;
	}
}
//��ӡ������
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
//�����������ͷ���
bool ClearLinkList(LinkList* L) {
	int length = LinkListLength(*L);
	while (length) {
		DeleteNode(L, length);
		length--;
	}
	return true;
}
//��������
bool DestroyLinkList(LinkList* L) {
	ClearLinkList(L);
	free(L->head);
	return true;
}