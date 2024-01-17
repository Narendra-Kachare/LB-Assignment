/*
    1. Write a program which returns addition of all element from singly linear linked list

Function Prototype :

    int DisplayPerfect(PNODE Head);

    Input linked list |11|->|20|->|32|->|41|

    Output: 52
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int Data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

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

int AdditionEven(PNODE Head)
{
    int Ans = 0;
    PNODE Temp = Head;
    while (Temp != NULL)
    {
        if (Temp->Data % 2 == 0)
        {
            Ans = Ans + Temp->Data;
        }
        Temp = Temp->next;
    }
    return Ans;
}

/////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    iRet = AdditionEven(First);
    printf("Addition of Even element is : %d\n", iRet);

    return 0;
}
