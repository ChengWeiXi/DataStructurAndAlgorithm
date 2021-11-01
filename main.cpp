#define _CRT_SECURE_NO_DEPRECATE

#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1

#include <stdio.h>
#include "SequenceList/SequenceList.hpp"
//菜单
void menu()
{
    printf("********1.创建                        2.插入*********\n");
    printf("********3.删除                        4.查找*********\n");
    printf("********5.倒置                        6.分奇偶排序***\n");
    printf("********7.输出                        8.清空*********\n");
    printf("********9.退出                              *********\n");
}
int main()
{
    SqList L; int choice;
    InitList(L);
    while (1)
    {
        menu();
        printf("请输入菜单序号：\n");
        scanf("%d", &choice);
        if (9 == choice) break;
        switch (choice)
        {
//         case 1:Create(L); break;
//         case 2:Insert(L); break;
//         case 3:Delete(L); break;
//         case 4:Search(L); break;
//         case 5:Reverse(L); break;
//         case 6:SplitSort(L); break;
//         case 7:PrintList(L); break;
//         case 8:ClearList(L); break;
        default:printf("输入错误！！！\n");
        }
    }
    return 0;
}