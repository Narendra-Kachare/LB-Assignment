/*
    1. Write a program which search first occurrence of particular element from singly linear linked list.
Function should return position at which element is found.

Function Prototype :

    int SearchFirstOcc( PNODE Head, int no );

    Input linked list |10|->|20|->|30|->|40|->|50|->|30|->|70|

Input element: 30

Output: 3
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

int SearchFirstOcc(PNODE Head, int No)
{
    PNODE Temp = Head;
    int iCnt = 1;
    while (Temp->next != NULL)
    {
        if (Temp->Data == No)
        {
            break;
        }
        iCnt++;        
        Temp = Temp->next;
    }
    if (Temp->Data != No)
    {
        return FALSE;
    }
    
    return iCnt;
}

/////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(First,iValue);
    if (iRet == FALSE)
    {
        printf("Element is not found\n");
    }
    else
    {
        printf("Position of Given element is : %d\n",iRet);
    }
    

    return 0;
}
