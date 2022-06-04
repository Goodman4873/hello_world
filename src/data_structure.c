#include <stdlib.h>
#include <stdio.h>
#include "data_structure.h"

/*********************************************
/* @brief global variable
/* 全局变量
*********************************************/
NODE* head;


//局部变量
NODE* Local_Insert(NODE* head,int x)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = x; 
	temp->next = NULL;
	if(head != NULL) temp->next = head;
	head = temp;
    return head;
}

void Local_Print(NODE* head)
{
	//struct Node* temp = head;
	printf("List is: ");
	while(head != NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
	printf("\n");
}

//全局变量
void Global_Insert(int x)
{
    NODE* temp = (NODE*)malloc(sizeof(NODE));
    temp->data = x;
    temp->next = NULL;
    if(head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}

void Global_Print()
{
    NODE* temp = head;
    printf("List is: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
