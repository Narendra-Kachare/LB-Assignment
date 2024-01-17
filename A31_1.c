/*
    1. Write a program which displays all element which are perfect from singly linear linked list

Function Prototype :

    int DisplayPerfect(PNODE Head);

    Input linked list |11|->|28|->|17|->|41|->|6|->|89|


    Output: 6 28
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

    if (*Head == NULL)  // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void DisplayPerfect(PNODE Head)
{
    PNODE Temp = Head;
    
    int Ans = 0, iCnt = 0;

    printf("Perfect number is : \n");
    while (Temp->next != NULL)
    {
        Ans = 0;
        
        for (int i = 1; i < Temp->Data; i++)
        {
            if (Temp->Data % i == 0)
            {
                Ans = Ans + i;
            }
        }
        if (Ans == Temp->Data)
        {
            printf("%d\t",Temp->Data);
        }
        Temp = Temp->next;
    }
}



/////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iValue = 0, iCnt = 0;
    int *iRet = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPerfect(First);

    

    return 0;
}
