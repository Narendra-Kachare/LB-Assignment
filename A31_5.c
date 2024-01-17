/*
    1. Write a program which display addition of digits element from singly linear linked list

Function Prototype :

    int DisplayPerfect(PNODE Head);

    Input linked list |110|->|230|->|20|->|240|->|640|

    Output: 240
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

void SumDigit(PNODE Head)
{
    int iDigit = 0, Ans = 0;
    PNODE Temp = Head;
    while (Temp != NULL)
    {
        while (Temp->Data != 0)
        {
            iDigit = Temp->Data % 10;
            Ans = Ans + iDigit;
            Temp->Data = Temp->Data / 10;
        }
        printf("%d\t",Ans);
            
        
        Temp = Temp->next;
    }
    
}

/////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    SumDigit(First);
    return 0;
}
