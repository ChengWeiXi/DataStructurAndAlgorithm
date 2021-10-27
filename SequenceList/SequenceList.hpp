#ifndef _SEQUENCE_LIST
#define _SEQUENCE_LIST

/*************************************************
    * Project : sequence_list(���ݽṹ - ˳���)
    * Date:    2021/10/27  
    * Author:  Hu 
************************************************/

bool CreateList(SqList& L, int n);// ������˳���L��˳�����n ���ܣ���������Ϊ��˳��� ʱ�临�Ӷȣ�O(n)
InitList(SqList &L) ������˳���L ���ܣ���ʼ�� ʱ�临�Ӷ�:O(1)
InsertList(SqList &L,int i,ElemType e) ����:˳���L,λ��i,Ԫ��e ���ܣ�λ��i������Ԫ��e ʱ�临�Ӷ�:O(n)
ListDelete(SqList &L,int i) ����:˳���L,λ��i ���ܣ�ɾ��λ��i��Ԫ�� ʱ�临�Ӷ�:O(n)
LocateElem(SqList L,ElemType e) ����:˳���L,Ԫ��e ���ܣ����ص�һ������e��Ԫ�ص�λ�� ʱ�临�Ӷ�:O(n)
Reverse(SqList &L) ������˳���L ���ú��� ��ԭ˳���ֱ�ӵ���
PrintList(SqList L) ����:˳���L ���ܣ�����L�������
SplitSort(SqList &L) ������˳���L ���ܣ��ֿ���ż�����ֿ�����
ClearList(SqList &L) ������˳���L ���ܣ����˳���

#endif