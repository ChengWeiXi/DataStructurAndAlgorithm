#define _CRT_SECURE_NO_DEPRECATE

#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1

#include <stdio.h>
#include "SequenceList/SequenceList.hpp"
//�˵�
void menu()
{
    printf("********1.����                        2.����*********\n");
    printf("********3.ɾ��                        4.����*********\n");
    printf("********5.����                        6.����ż����***\n");
    printf("********7.���                        8.���*********\n");
    printf("********9.�˳�                              *********\n");
}
int main()
{
    SqList L; int choice;
    InitList(L);
    while (1)
    {
        menu();
        printf("������˵���ţ�\n");
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
        default:printf("������󣡣���\n");
        }
    }
    return 0;
}