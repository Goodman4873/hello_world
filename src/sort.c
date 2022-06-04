#include "sort.h"

void BubbleSort(int *Arry , int len)
{
    int temp = 0;
    for(int i = 0 ; i < len ; i++)
    {
        for(int j = 0 ; j < len - 1 ; j++)
        {
            if(Arry[j] > Arry[j+1])
            {
                temp = Arry[j];
                Arry[j] = Arry[j+1];
                Arry[j+1] = temp;
            }
        }
    }
}
