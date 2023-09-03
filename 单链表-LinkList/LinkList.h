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
//��ʼ����������ͷ���
bool InitLinkList(LinkList* L);
//������
bool AddNode(LinkList * L, int i, ElemType val);
//ɾ��ָ�����
bool DeleteNode(LinkList* L, int i);
//���ҽ��
Lnode* GetNode(LinkList L, int i);
//������
int LinkListLength(LinkList L);
//�ж������Ƿ�Ϊ��
bool LinkListIsEmpty(LinkList L);
//��ӡ������
bool PrintLinkList(LinkList L);
//�����������ͷ���
bool ClearLinkList(LinkList* L);
//��������
bool DestroyLinkList(LinkList* L);
#endif // !__LINKLIST_WANS__

