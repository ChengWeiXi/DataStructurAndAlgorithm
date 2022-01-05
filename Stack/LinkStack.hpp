/*
	Project: single_linked_stack (数据结构 链栈)
	Date:    2021/12/4
	Author:  Hu
	InitStack(LinkStack &S) 参数：链栈S 功能：初始化  时间复杂度O(1)
	Push(LinkStack &S,SElemType e) 参数：链栈S,元素e 功能：将e入栈 时间复杂度:O(1)
	Pop(LinkStack &S,SElemType &e) 参数：链栈S,元素e 功能：栈顶出栈,e接收出栈元素值 时间复杂度O(1)
	GetTop(LinkStack &S,SElemType &e) 参数：链栈S,元素e 功能：得到栈顶元素 时间复杂度O(1)
*/
#ifndef __LINKSTACK__
#define __LINKSTACK__

#define Status int
#define SElemType int
//链栈结点数据结构

typedef struct StackNode
{
    SElemType data;//数据域
    struct StackNode* next;//指针域
}StackNode, * LinkStack;

Status InitStack(LinkStack& S);
Status Push(LinkStack& S, SElemType e);
bool Pop(LinkStack& S, SElemType& e);
bool GetTop(LinkStack& S, SElemType& e);	//取栈顶函数 用e返回

void menu();
void PushToStack(LinkStack& S);
void PopFromStack(LinkStack& S);
void GetTopOfStack(LinkStack S);

#endif