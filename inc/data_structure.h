#ifndef _DATA_STRUCTURE_H_
#define _DATA_STRUCTURE_H_

typedef struct __NODE
{
    int data;
    struct __NODE *next;
}NODE;

NODE* Local_Insert(NODE* head,int x);

void Local_Print(NODE* head);

void Global_Insert(int x);

void Global_Print();

#endif