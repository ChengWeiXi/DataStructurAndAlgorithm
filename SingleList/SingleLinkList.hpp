/*************************************************
**	Project: single linkeed list (数据结构 单链表)
**	Date:    2021/11/04
**	Author:  Hu
*************************************************/


#ifndef _SINGLELINKLIST
#define _SINGLELINKLIST

#define Status int
#define ElemType int

//单链表结点数据结构
typedef struct LNode
{
    ElemType data;//数据域
    struct LNode* next;//指针域
}LNode, * LinkList;

Status InitList(LinkList& L);                        //参数：单链表L 功能：初始化 时间复杂度 O(1)
int ListLength(LinkList L);                         //参数：单链表L 功能：获得单链表长度 时间复杂度O(n)
bool ListInsert(LinkList& L, int i, ElemType e); //参数：单链表L, 位置i，元素e 功能：位置i后插 时间复杂度O(n)[加入了查找]
                                            //若已知指针p指向的后插 O(1)
bool ListDelete(LinkList& L, int i);             //参数：单链表L，位置i 功能：删除位置i元素 时间复杂度O(n)[加入了查找]
                                            //若已知p指针指向的删除 最好是O(1), 因为可以与后继结点交换数据域，然后删除后继结点。
                                            //最坏是O(n), 即从头查找p之前的结点, 然后删除p所指结点
LNode*  LocateElem(LinkList L, ElemType e);         //参数：单链表L，元素e 功能：查找第一个等于e的元素，返回指针 时间复杂度O(n)


#endif
