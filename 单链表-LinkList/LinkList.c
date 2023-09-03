#include "LinkList.h"

bool InitLinkList(LinkList* L) {
	L->head = (Lnode*)calloc(1, sizeof(Lnode));
	L->rear = L->head;
}