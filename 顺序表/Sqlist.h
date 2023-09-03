#ifndef __SQLIST_WANS__
#define __SQLIST_WANS__
#define ElemType int
#define MaxSize_100 100
#include <stdbool.h>

typedef struct Sqlist_s {
	ElemType data[MaxSize_100];
	int length;
}Sqlist;
//��ʼ��һ���յ�˳���
void InitSqlist(Sqlist * L);
//��ֵ��˳������Ԫ�ط���λ��
int LocateElem(Sqlist L, ElemType val);
//����λ�ò���Ԫ�أ�����Ԫ��ֵ
ElemType GetElem(Sqlist L, int i);
//��˳���ָ��λ�ò���Ԫ��ֵ
bool SqlistInsert(Sqlist* L, int i,ElemType val);
//ɾ��˳���ָ��λ�õ�Ԫ��
ElemType SqlistDelete(Sqlist* L, int i);
//��ӡ˳��������Ԫ��
bool PrintSqlist(Sqlist L);
//�ж�˳����Ԫ���Ƿ�Ϊ��
bool IsEmpty(Sqlist L);
//����˳���
bool DestroySqlist(Sqlist* L);

#endif // __SQLIST_WANS__

