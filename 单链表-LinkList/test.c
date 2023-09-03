#include "LinkList.h"
#include <stdio.h>

int main(void) {
	LinkList L;
	InitLinkList(&L);
	AddNode(&L, 1, 2);
	AddNode(&L, 2, 4);
	AddNode(&L, 3, 8);
	AddNode(&L, 4, 16);
	AddNode(&L, 23, 32);
	PrintLinkList(L);
	int length1 = LinkListLength(L);
	printf("length=%d\n", length1);

	DeleteNode(&L, 2);
	PrintLinkList(L);

	int length2 = LinkListLength(L);
	printf("length=%d\n", length2);

	ClearLinkList(&L);
	PrintLinkList(L);
	int length3 = LinkListLength(L);
	printf("length=%d\n", length3);

	DestroyLinkList(&L);
	return 0;
}