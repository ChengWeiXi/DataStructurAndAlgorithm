/*************************************************
 **** Project : sequence_list(���ݽṹ - ˳���)
 **** Date:     2021/10/27  ���Reverse   ���ClearList
 **** Author:   Hu 
************************************************/

#ifndef _SEQUENCE_LIST
#define _SEQUENCE_LIST

#define MaxSize 100
#define ElemType int
#define Status int

//˳������ݽṹ
typedef struct
{
    ElemType data[MaxSize];//˳���Ԫ��
    int length;            //˳���ǰ����
}SqList;

bool   CreateList(SqList& L,int n);               // ������˳���L��˳�����n ���ܣ���������Ϊ��˳��� ʱ�临�Ӷȣ�O(n)
Status InitList(SqList& L);                       // ������˳���L ���ܣ���ʼ�� ʱ�临�Ӷ� : O(1)
bool   InsertList(SqList& L, int i, ElemType e);  // ������˳���L, λ��i, Ԫ��e ���ܣ�λ��i������Ԫ��e ʱ�临�Ӷ� : O(n)
bool   ListDelete(SqList& L, int i);              // ������˳���L, λ��i ���ܣ�ɾ��λ��i��Ԫ�� ʱ�临�Ӷ� : O(n)
int    LocateElem(SqList L, ElemType e);          // ������˳���L, Ԫ��e ���ܣ����ص�һ������e��Ԫ�ص�λ�� ʱ�临�Ӷ� : O(n)
void   Reverse(SqList& L);                        // ������˳���L ���ú��� ��ԭ˳���ֱ�ӵ���
void   PrintList(SqList L);                       // ������˳���L ���ܣ�����L�������
void   SplitSort(SqList& L);                      // ������˳���L ���ܣ��ֿ���ż�����ֿ�����
void   ClearList(SqList& L);                      // ������˳���L ���ܣ����˳���

#endif