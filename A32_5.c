/*
   Write a program which display largest digits of all element from singly 
linear linked list. 
Function Prototype : 
void DisplayLarge( PNODE Head); 
Input linked list : |11|->|250]->|532|->|419]| 
Output : 1 5 5 9
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

void DisplayLarge(PNODE Head)
{
    printf("Largest digit in each Node are : \n");
    while(Head != NULL)
    {
        int No = Head->Data;
        int Digit = 0;
        int Max = No % 10;
        while (No != 0)
        {
            Digit = No % 10;
            if(Max < Digit)
            {
                Max = Digit;
            }
            No = No / 10;
            
        }
        printf("%d\t",Max);
        
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

    DisplayLarge(First);

    // SumDigit(First);
    return 0;
}
