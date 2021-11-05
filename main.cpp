// #define _CRT_SECURE_NO_DEPRECATE
// 
// #define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
// 
// #include <stdio.h>
// #include "SequenceList/SequenceList.hpp"
// 
// //≤Àµ•
// int main()
// {
//     SqList L; int choice;
//     InitList(L);
//     while (1)
//     {
//         SeqListMenu();
//         printf("«Î ‰»Î≤Àµ•–Ú∫≈£∫\n");
//         scanf("%d", &choice);
//         if (9 == choice) break;
//         switch (choice)
//         {
// //             case 1:Create(L); break;
// //             case 2:Insert(L); break;
// //             case 3:Delete(L); break;
// //             case 4:Search(L); break;
// //             case 5:Reverse(L); break;
// //             case 6:SplitSort(L); break;
// //             case 7:PrintList(L); break;
// //             case 8:ClearList(L); break;
// //             default:printf(" ‰»Î¥ÌŒÛ£°£°£°\n");
//         }
//     }
//     return 0;
// }


#include <iostream>
#include <vector>

using namespace std;

void TestreRefenceFun(vector<int*> Pointer,vector<int> Value,vector<int>& Reference)
{
    vector<int*> tmpPointer = Pointer;
    int*  ptr = tmpPointer.front();
    *ptr = 23;

    *(Pointer.front()) = 44;

    vector<int> tempValue = Value;
    Value.push_back(3);

    vector<int> tempRefer = Reference;
    tempRefer.push_back(89);
    Reference.push_back(5);
}

int main(void)
{
    int a;
    vector<int> tempRe(8);
    vector<int> tempVal(1);
    vector<int* > temptr;

    temptr.push_back(&a);
    TestreRefenceFun(temptr, tempVal, tempRe);

    int iSize = tempRe.size();
    a;

    return 0;

}