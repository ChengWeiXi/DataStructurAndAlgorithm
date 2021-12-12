#define _CRT_SECURE_NO_DEPRECATE

#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
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

#include<stdio.h>
#include<set>
int main()
{
    int a, b;
    char x;
    scanf("%d\x20%c%d", &a, &x, &b);
    if (b != 0) {
        switch (x) {
        case '+':printf("%d", a + b); break;
        case '-':printf("%d", a - b); break;
        case '*':printf("%d", a * b); break;
        case '/':printf("%d", a / b); break;
        case '%':printf("%d", a % b); break;
        default:printf("ERROR"); break;
        }
        return 0;
    }
}