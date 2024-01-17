/*
    1. Write a program which returns addition of all element from singly linear linked list.

Function Prototype :

    int Addition( PNODE Head, int no );

    Input linked list |10|->|20|->|30|->|40|

Input element: 30

Output: 6
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct Node
{
    int Data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

/////////////////////////////////////////////////
// Helper Function
/////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int No)
{
    // Allocate the memory
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialise the memory
    newn->Data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Addition(PNODE Head)
{
    PNODE Temp = Head;
    int iAns = 0;
    while (Temp->next != NULL)
    {
        iAns = iAns + Temp->Data;
        Temp = Temp->next;
    }
    return iAns;
}

/////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = Addition(First);

    printf("Addition of the Given elements is : %d\n",iRet);

    return 0;
}
