#include "Sqlist.h"
#include <stdio.h>
#include <string.h>
//��ʼ��һ���յ�˳���
void InitSqlist(Sqlist* L) {
	memset(L->data,0, MaxSize_100);
	L->length = 0;
}

//��ֵ��˳������Ԫ�ط���λ��
//���ҵ������±�λ��
//��û���ҵ�����-1
int LocateElem(Sqlist L, ElemType val) {
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == val) {
			return i;
		}
	}
	return -1;
}

//����λ�ò���Ԫ�أ�����Ԫ��ֵ
ElemType GetElem(Sqlist L, int i) {
	if (i < 0 || i >=L.length) {
		printf("int i is wrong->GetElem(L,i)");
		exit(1);
	}
	else {
		return L.data[i];
	}
}
//��˳���ָ��λ�ò���Ԫ��ֵ
bool SqlistInsert(Sqlist* L, int i, ElemType val) {
	if (i < 0 || i >L->length) {
		printf("int i is wrong->SqlistInsert(&L,i,val)");
		exit(1);
	}
	else {
		for (int j = L->length; j > i; j--) {
			L->data[j] = L->data[j - 1];
		}
		L->data[i] = val;
		L->length++;
		return true;
	}
}
//ɾ��˳���ָ��λ�õ�Ԫ��
ElemType SqlistDelete(Sqlist* L, int i) {
	if (i < 0 || i >= L->length) {
		printf("int i is wrong->SqlistInsert(&L,i,val)");
		exit(1);
	}
	else {
		for (int j = i; j <L->length-1; j++) {
			L->data[j] = L->data[j + 1];
		}
		L->data[L->length-1] =0;
		L->length--;
		return true;
	}
}
//��ӡ˳��������Ԫ��
bool PrintSqlist(Sqlist L) {
	if (SqlistIsEmpty(L)) {
		printf("Nothing print!The Sqlist is Empty!\n");
		return false;
	}
	else
	{
		for (int i=0; i < L.length; i++) {
			printf("%d ", L.data[i]);
		}
		printf("\n");
		return true;
	}
}
//�ж�˳����Ԫ���Ƿ�Ϊ��
bool SqlistIsEmpty(Sqlist L) {
	if (L.length == 0) {
		return true;
	}
	else
	{
		return false;
	}
}
//����˳���
bool DestroySqlist(Sqlist* L) {
	memset(L->data, 0, L->length);
	L->length = 0;
	return true;
}
