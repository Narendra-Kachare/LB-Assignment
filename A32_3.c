/*
    3. Write a program which display product of all digits of all element from 
singly linear linked list. (Don’t consider 0) 
Function Prototype : 
void DisplayProduct( PNODE Head); 
Input linked list : |11]->|20|]->|32|->]41] 
Output : 1 2 6 4 
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

void DisplayProduct(PNODE Head)
{
    printf("Product of each elements in LL (without considering 0) are : \n");
    while(Head != NULL)
    {
        int Digit = 0;
        int Ans = 1;
        while (Head->Data != 0)
        {
            Digit = Head->Data % 10;
            Head->Data = Head->Data / 10;
            if (Digit == 0)
            {
                Digit = 1;
            }
            
            Ans = Ans * Digit;
        }
        printf("%d\t",Ans);
        
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
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);
    Display(First);

    DisplayProduct(First);

    // SumDigit(First);
    return 0;
}
