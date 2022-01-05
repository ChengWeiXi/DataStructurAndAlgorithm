/*
	Project: single_linked_stack (���ݽṹ ��ջ)
	Date:    2021/12/4
	Author:  Hu
	InitStack(LinkStack &S) ��������ջS ���ܣ���ʼ��  ʱ�临�Ӷ�O(1)
	Push(LinkStack &S,SElemType e) ��������ջS,Ԫ��e ���ܣ���e��ջ ʱ�临�Ӷ�:O(1)
	Pop(LinkStack &S,SElemType &e) ��������ջS,Ԫ��e ���ܣ�ջ����ջ,e���ճ�ջԪ��ֵ ʱ�临�Ӷ�O(1)
	GetTop(LinkStack &S,SElemType &e) ��������ջS,Ԫ��e ���ܣ��õ�ջ��Ԫ�� ʱ�临�Ӷ�O(1)
*/
#ifndef __LINKSTACK__
#define __LINKSTACK__

#define Status int
#define SElemType int
//��ջ������ݽṹ

typedef struct StackNode
{
    SElemType data;//������
    struct StackNode* next;//ָ����
}StackNode, * LinkStack;

Status InitStack(LinkStack& S);
Status Push(LinkStack& S, SElemType e);
bool Pop(LinkStack& S, SElemType& e);
bool GetTop(LinkStack& S, SElemType& e);	//ȡջ������ ��e����

void menu();
void PushToStack(LinkStack& S);
void PopFromStack(LinkStack& S);
void GetTopOfStack(LinkStack S);

#endif