#include "Sqlist.h"
#include <stdio.h>
#include <string.h>
//��ʼ��һ���յ�˳���
void InitSqlist(Sqlist* L) {
	memset(L->data,0, MaxSize_100);
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
	if (i < 0 || i >= L.length) {
		printf("int i is wrong->GetElem(L,i)");
		exit(1);
	}
	else {
		return L.data[i];
	}
}
//��˳���ָ��λ�ò���Ԫ��ֵ
bool SqlistInsert(Sqlist* L, int i, ElemType val) {

}
//ɾ��˳���ָ��λ�õ�Ԫ��
ElemType SqlistDelete(Sqlist* L, int i);
//��ӡ˳��������Ԫ��
bool PrintSqlist(Sqlist L);
//�ж�˳����Ԫ���Ƿ�Ϊ��
bool IsEmpty(Sqlist L);
//����˳���
bool DestroySqlist(Sqlist* L);
