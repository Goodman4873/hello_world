#include <stdlib.h>
#include <stdio.h>
#include "compare.h"
#include "sort.h"
#include "data_structure.h"



int main()
{
    int goal[] = {10 , 6 , 3 , 9 , 1};
    int length;
    length = sizeof(goal) / sizeof(int);
    BubbleSort(goal , length);
    printf("hello world!\n");
    for(int i = 0; i < length; i++)
        printf("%d ", goal[i]);
    return 0;
}

// int main() 
// {
// 	NODE* head = NULL;
// 	printf("How many numbers?\n");
// 	int n,i,x;
// 	scanf("%d",&n);
// 	for(i = 0;i<n;i++)
// 	{
// 	    printf("Enter the number \n");
// 		scanf("%d",&x);
// 		head = Insert(head,x);
// 		Print(head);
// 	}
// }


// int main()
// {
//     printf("How many numbers?\n");
//     int n,x;
//     scanf("%d",&n);
//     for(int i = 0; i < n; i++)
//     {
//         printf("Enter the number \n");
//         scanf("%d",&x);
//         Global_Insert(x);
//         Global_Print();
//     }
// }
