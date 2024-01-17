/*
    1. Write a program which returns Smallest element from singly linear linked list.

Function Prototype :

    int Minimum(PNODE Head);

    Input linked list |110|->|230|->|20|->|240|->|640|


    Output: 20
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

int Minimum(PNODE Head)
{
    PNODE Temp = Head;
    int iMin = Temp->Data;

    while (Temp->next != NULL)
    {
        if (iMin > Temp->Data)
        {
            iMin = Temp->Data;
        }
        Temp = Temp->next;
        
    }
    return iMin;
}

/////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&First, 620);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Minimum(First);

    printf("Minimum of the Given elements is : %d\n",iRet);

    return 0;
}
