#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1


#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include "./SequenceList.hpp"

using namespace std;

//***************************基本操作函数*******************************//

//初始化顺序表函数，构造一个空的顺序表 
Status InitList(SqList& L)
{
    memset(L.data, 0, sizeof(L.data));//初始化数据为0
    L.length = 0;                //初始化长度为0
    return 0;
}

//创建顺序表函数 初始化前n个数据
bool CreateList(SqList& L, int n)
{
    if (n<0 || n>MaxSize)
    {
        return false;//n非法
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &L.data[i]);
        L.length++;
    }
    return true;
}

//插入函数 位置i插入数据 i及之后元素后移  1=<i<=length+1 
bool InsertList(SqList& L, int i, ElemType e)
{
    if (i<1 || i>L.length + 1) //判断位置是否有效
    {
        printf("位置无效！！！\n");
        return false;
    }
    if (L.length >= MaxSize)//判断存储空间是否已满
    {
        printf("当前存储空间已满！！！\n");
        return false;
    }
    for (int j = L.length; j >= i; j--)//位置i及之后元素后移
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

//删除函数 删除位置i的元素 i之后的元素依次前移
bool  ListDelete(SqList& L, int i)
{
    if (i<1 || i>L.length)
    {
        printf("位置无效！！！\n");
        return false;
    }
    for (int j = i; j <= L.length - 1; j++)//位置i之后元素依次前移覆盖
    {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}

//查找函数 按位置从小到大查找第一个值等于e的元素 并返回位置
int LocateElem(SqList L, ElemType e)
{
    for (int i = 0; i < L.length; i++)//从低位置查找
    {
        if (L.data[i] == e)
            return i + 1;
    }
    return 0;
}

//倒置函数 将原顺序表直接倒置
void Reverse(SqList& L)
{
    if (L.length)
        for (int i = 0; i < L.length - 1 - i; i++)
        {
            int t = L.data[i];
            L.data[i] = L.data[L.length - 1 - i];
            L.data[L.length - 1 - i] = t;
        }
}

//奇偶分开并排序
void SplitSort(SqList& L)
{
    int Even = 0;
    int Odd = L.length - 1;
    int i = 0;
    int j = L.length - 1;
    bool flag = false;
    if (L.length)
        for (; i < j; i++, j--)
        {
            while (L.data[i] % 2 != 0)i++;
            while (L.data[j] % 2 == 0)j--;
            if (L.data[i] % 2 == 0 && L.data[j] % 2 != 0 && i < j)
            {
                int temp = L.data[i];
                L.data[i] = L.data[j];
                L.data[j] = temp;
                flag = true;
            }
            if (!flag) //没有交换
            {
                Even = L.length - 1;//全奇数
                Odd = 0; //全偶数
            }
        }
    if (flag)
    {
        for (int i = 0; i < L.length; i++)
            if (L.data[i] % 2 == 0)
            {
                Odd = i;
                Even = i - 1;
                break;
            }
    }
    sort(L.data, L.data + Even + 1);
    sort(L.data + Odd, L.data + L.length);
}

//清空顺序表
void ClearList(SqList& L) {
    L.length = 0;
}

//********************************功能函数*****************************************//
//输出功能函数 按位置从小到大输出顺序表所有元素
void PrintList(SqList L)
{
    printf("当前顺序表所有元素:");
    for (int i = 0; i < L.length; i++)
    {
        printf("%d ", L.data[i]);
    }
    printf("\n");
}
//创建顺序表函数
void Create(SqList& L)
{
    int n; bool flag;
    L.length = 0;
    printf("请输入要创建的顺序表长度(>1):");
    scanf("%d", &n);
    printf("请输入%d个数（空格隔开）:", n);
    flag = CreateList(L, n);
    if (flag) {
        printf("创建成功！\n");
        PrintList(L);
    }
    else printf("输入长度非法！\n");

}
//插入功能函数 调用InsertList完成顺序表元素插入 调用PrintList函数显示插入成功后的结果
void Insert(SqList& L)
{
    int place; ElemType e; bool flag;
    printf("请输入要插入的位置(从1开始)及元素:\n");
    scanf("%d%d", &place, &e);
    flag = InsertList(L, place, e);
    if (flag)
    {
        printf("插入成功！！！\n");
        PrintList(L);
    }
}
//删除功能函数 调用ListDelete函数完成顺序表的删除 调用PrintList函数显示插入成功后的结果
void Delete(SqList& L)
{
    int place; bool flag;
    printf("请输入要删除的位置(从1开始):\n");
    scanf("%d", &place);
    flag = ListDelete(L, place);
    if (flag)
    {
        printf("删除成功！！！\n");
        PrintList(L);
    }
}
//查找功能函数 调用LocateElem查找元素
void Search(SqList L)
{
    ElemType e; int flag;
    printf("请输入要查找的值:\n");
    scanf("%d", &e);
    flag = LocateElem(L, e);
    if (flag)
    {
        printf("该元素位置为:%d\n", flag);
    }
    else
        printf("未找到该元素！\n");
}
