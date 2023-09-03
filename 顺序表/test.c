#include "Sqlist.h"
#include <stdio.h>

int main(void) {
	Sqlist L;
	InitSqlist(&L);
	SqlistInsert(&L, 0, 1);
	SqlistInsert(&L, 1, 2);
	SqlistInsert(&L, 2, 4);
	SqlistInsert(&L, 3, 8);
	SqlistInsert(&L, 4, 16);
	SqlistInsert(&L, 5, 32);
	int ret=LocateElem(L, 16);
	printf("%d\n", ret);

	int ret2=GetElem(L, 2);
	printf("%d\n", ret2);

	SqlistDelete(&L, 2);

	PrintSqlist(L);

	bool ret3 = IsEmpty(L);
	printf("%d\n", ret3);

	DestroySqlist(&L);

	bool ret4 = IsEmpty(L);
	printf("%d\n", ret4);

	PrintSqlist(L);

	return 0;
}