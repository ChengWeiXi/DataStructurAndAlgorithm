/********************************************
**	Project: sequence_stack (数据结构-顺序栈)
**	Date:    2018/09/14
**	Author:  Hu
**  注意：严蔚敏版没有判断栈空函数，在入栈、出栈函数里面判断栈是否空，与王道的不同 尤其是top指针在base之上(有元素时)
**	    另外，严蔚敏版 59页取栈顶有误
*******************************************/

#ifndef _SEQUENCE_STACK
#define _SEQUENCE_STACK

#define Status int
#define SElemType int
#define MaxSize 100

typedef struct Stack
{
	SElemType* base;   //栈底指针 不变
	SElemType* top;    //栈顶指针 一直在栈顶元素上一个位置
	int stacksize;     //栈可用的最大容量
}SqStack;

Status	InitStack(SqStack &s);                  // 参数：顺序栈s 功能：初始化  时间复杂度O(1)
Status  Push(SqStack &s,SElemType e);           // 参数：顺序栈s,元素e 功能：将e入栈 时间复杂度:O(1)
Status	Pop(SqStack &s,SElemType &e);           // 参数：顺序栈s,元素e 功能：出栈,e接收出栈元素值 时间复杂度O(1)
bool	GetTop(SqStack s,SElemType &e);         // 参数：顺序栈s,元素e 功能：得到栈顶元素 时间复杂度O(1)

//********************************功能实现函数**************************************//

void menu();                                    //菜单
void PushToStack(SqStack& s);                   //入栈功能函数 调用Push函数
void PopFromStack(SqStack& s);                  //出栈功能函数 调用Pop函数
void GetTopOfStack(SqStack& s);                 //取栈顶功能函数 调用GetTop

#endif

