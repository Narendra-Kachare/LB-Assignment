/*
    4. Write a program which display smallest digits of all element from singly 
linear linked list. 
Function Prototype : 
void DisplaySmall( PNODE Head); 
Input linked list : |11]->|250|->|532|->|415]| 
Output : 1 0 2 1
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

void Display(PNODE Head)
{
    printf("Nodes of the linked list are : \n");
    while (Head != NULL)
    {
        printf("| %d | -> ",Head->Data);
        Head = Head->next;
    }
    printf("NULL\n\n");
    
}

void DisplaySmall(PNODE Head)
{
    printf("Smallest digit in each Node are : \n");
    while(Head != NULL)
    {
        int No = Head->Data;
        int Digit = 0;
        int Min = No % 10;
        while (No != 0)
        {
            Digit = No % 10;
            if(Min > Digit)
            {
                Min = Digit;
            }
            No = No / 10;
            
        }
        printf("%d\t",Min);
        
        Head = Head->next;
    }
}

/////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 250);
    InsertFirst(&First, 532);
    InsertFirst(&First, 419);
    Display(First);

    DisplaySmall(First);

    // SumDigit(First);
    return 0;
}
