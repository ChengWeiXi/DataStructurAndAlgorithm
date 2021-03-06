/*************************************************
 **** Project : Sequence_List(数据结构 - 顺序表)
 **** Date:     2021/10/27  添加Reverse   添加ClearList
 **** Author:   Hu 
************************************************/

#ifndef _SEQUENCE_LIST
#define _SEQUENCE_LIST

#define MaxSize 10
#define ElemType int
#define Status int

//顺序表数据结构
typedef struct
{
    ElemType data[MaxSize];//顺序表元素
    int length;            //顺序表当前长度
}SqList;

bool   CreateList(SqList& L,int n);               // 参数：顺序表L，顺序表长度n 功能：创建长度为的顺序表 时间复杂度：O(n)
Status InitList(SqList& L);                       // 参数：顺序表L 功能：初始化 时间复杂度 : O(1)
bool   InsertList(SqList& L, int i, ElemType e);  // 参数：顺序表L, 位置i, 元素e 功能：位置i处插入元素e 时间复杂度 : O(n)
bool   ListDelete(SqList& L, int i);              // 参数：顺序表L, 位置i 功能：删除位置i处元素 时间复杂度 : O(n)
int    LocateElem(SqList L, ElemType e);          // 参数：顺序表L, 元素e 功能：返回第一个等于e的元素的位置 时间复杂度 : O(n)
void   Reverse(SqList& L);                        // 参数：顺序表L 倒置函数 将原顺序表直接倒置
void   PrintList(SqList L);                       // 参数：顺序表L 功能：遍历L，并输出 时间复杂度 : O(n)
void   SplitSort(SqList& L);                      // 参数：顺序表L 功能：分开奇偶，并分开排序
void   ClearList(SqList& L);                      // 参数：顺序表L 功能：清空顺序表


//********************************功能函数*****************************************//

void PrintList(SqList L);                      //输出功能函数 按位置从小到大输出顺序表所有元素
void Create(SqList& L);                        //创建顺序表函数
void Insert(SqList& L);                        //插入功能函数 调用InsertList完成顺序表元素插入
                                               //调用PrintList函数显示插入成功后的结果

void Delete(SqList& L);                        //删除功能函数 调用ListDelete函数完成顺序表的删除 
                                               //调用PrintList函数显示插入成功后的结果

void Search(SqList L);                         //查找功能函数 调用LocateElem查找元素

void SeqListMenu();                                   //

//********************************功能函数*****************************************//

#endif