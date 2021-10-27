#ifndef _SEQUENCE_LIST
#define _SEQUENCE_LIST

/*************************************************
    * Project : sequence_list(数据结构 - 顺序表)
    * Date:    2021/10/27  
    * Author:  Hu 
************************************************/

bool CreateList(SqList& L, int n);// 参数：顺序表L，顺序表长度n 功能：创建长度为的顺序表 时间复杂度：O(n)
InitList(SqList &L) 参数：顺序表L 功能：初始化 时间复杂度:O(1)
InsertList(SqList &L,int i,ElemType e) 参数:顺序表L,位置i,元素e 功能：位置i处插入元素e 时间复杂度:O(n)
ListDelete(SqList &L,int i) 参数:顺序表L,位置i 功能：删除位置i处元素 时间复杂度:O(n)
LocateElem(SqList L,ElemType e) 参数:顺序表L,元素e 功能：返回第一个等于e的元素的位置 时间复杂度:O(n)
Reverse(SqList &L) 参数：顺序表L 倒置函数 将原顺序表直接倒置
PrintList(SqList L) 参数:顺序表L 功能：遍历L，并输出
SplitSort(SqList &L) 参数：顺序表L 功能：分开奇偶，并分开排序
ClearList(SqList &L) 参数：顺序表L 功能：清空顺序表

#endif