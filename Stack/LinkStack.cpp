
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include"LinkStack.h"

using namespace std;

// #define Status int
// #define SElemType int
// //链栈结点数据结构

// typedef struct StackNode
// {
// 	SElemType data;//数据域
// 	struct StackNode* next;//指针域
// }StackNode, * LinkStack;

//**************************基本操作函数***************************//
//初始化函数
Status InitStack(LinkStack& S)
{
	S = NULL;//生成空栈 以单链表表头为栈顶 注意，链栈没有像链表似的头结点
	return 1;
}
//入栈函数 将e压入栈
Status Push(LinkStack& S, SElemType e)
{
	StackNode* p;
	p = new StackNode;//生成新节点
	p->data = e;      //赋值
	p->next = S;      //压入栈顶
	S = p;
	return 1;
}
//出栈函数  栈顶出栈用e返回 注意释放空间
bool Pop(LinkStack& S, SElemType& e)
{
	LinkStack p;
	if (S == NULL)return false;//栈空
	e = S->data;
	p = S;
	S = S->next;
	free(p);
	return true;
}
//取栈顶函数 用e返回
bool GetTop(LinkStack& S, SElemType& e) //严蔚敏版（人民邮电出版社） 61页有误
{
	if (S == NULL) return false;//栈顶为空
	e = S->data;
	return true;
}
//**************************功能实现函数***************************//
//菜单
void menu()
{
	printf("********1.入栈          2.出栈*********\n");
	printf("********3.取栈顶元素    4.退出*********\n");
}
//入栈功能函数 调用Push函数 
void PushToStack(LinkStack& S)
{
	int n; SElemType e; int flag;
	printf("请输入入栈元素个数(>=1)：\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("请输入第%d个元素的值:", i + 1);
		scanf("%d", &e);
		flag = Push(S, e);
		if (flag)printf("%d已入栈\n", e);
	}
}
//出栈功能函数 调用Pop函数
void PopFromStack(LinkStack& S)
{
	int n; SElemType e; int flag;
	printf("请输入出栈元素个数(>=1)：\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		flag = Pop(S, e);
		if (flag)printf("%d已出栈\n", e);
		else { printf("栈已空！！！\n"); break; }
	}
}
//取栈顶功能函数 调用GetTop函数
void GetTopOfStack(LinkStack S)
{
	SElemType e; bool flag;
	flag = GetTop(S, e);
	if (flag)printf("栈顶元素为:%d\n", e);
	else printf("栈已空！！！\n");
}