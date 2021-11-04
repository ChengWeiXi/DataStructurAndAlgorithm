/*************************************************
**	Project: single linkeed list (���ݽṹ ������)
**	Date:    2021/11/04
**	Author:  Hu
*************************************************/


#ifndef _SINGLELINKLIST
#define _SINGLELINKLIST

#define Status int
#define ElemType int

//�����������ݽṹ
typedef struct LNode
{
    ElemType data;//������
    struct LNode* next;//ָ����
}LNode, * LinkList;

Status InitList(LinkList& L);                        //������������L ���ܣ���ʼ�� ʱ�临�Ӷ� O(1)
int ListLength(LinkList L);                         //������������L ���ܣ���õ������� ʱ�临�Ӷ�O(n)
bool ListInsert(LinkList& L, int i, ElemType e); //������������L, λ��i��Ԫ��e ���ܣ�λ��i��� ʱ�临�Ӷ�O(n)[�����˲���]
                                            //����ָ֪��pָ��ĺ�� O(1)
bool ListDelete(LinkList& L, int i);             //������������L��λ��i ���ܣ�ɾ��λ��iԪ�� ʱ�临�Ӷ�O(n)[�����˲���]
                                            //����֪pָ��ָ���ɾ�� �����O(1), ��Ϊ�������̽�㽻��������Ȼ��ɾ����̽�㡣
                                            //���O(n), ����ͷ����p֮ǰ�Ľ��, Ȼ��ɾ��p��ָ���
LNode*  LocateElem(LinkList L, ElemType e);         //������������L��Ԫ��e ���ܣ����ҵ�һ������e��Ԫ�أ�����ָ�� ʱ�临�Ӷ�O(n)


#endif
