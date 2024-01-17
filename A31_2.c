/*
    1. Write a program which displays all element which are perfect from singly linear linked list

Function Prototype :

    int DisplayPerfect(PNODE Head);

    Input linked list |11|->|20|->|17|->|41|->|22|->|89|


    Output: 11  17  41  89
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

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

void DisplayPrime(PNODE Head)
{
    BOOL FLAG = FALSE;
    int i = 0, iCnt = 0;
    PNODE Temp = Head;

    printf("Your Elements will be : \n");
    while (Temp != NULL)
    {
        for (i = 2; i <= ((Temp->Data) / 2);)
        {
            if ((Temp->Data) % i != 0)
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if (i == (Temp->Data / 2) + 1)
        {
            printf("%d\t", Temp->Data);
        }

        Temp = Temp->next;
    }
}

/////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);

    return 0;
}
