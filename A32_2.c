/*
    2. Write a program which display all palindrome elements of singly linked 
list. 
Function Prototype : 
void DisplayPallindrome( PNODE Head); 
Input linked list’: |11]->]28]->|17|->|414|->|6|->|89| 
Output : 11 6 414 
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

void DisplayPallindrome(PNODE Head)
{
    printf("Pallindrome elements in LL are : \n");
    while(Head != NULL)
    {
        int No = Head->Data;
        int Ans = No % 10;
        while (No != 0)
        {
            No = No / 10;
            Ans = Ans * 10 + No % 10;
        }
        Ans = Ans / 10;
        if(Ans == Head->Data)
        {
            printf("%d\t",Head->Data);
        }
        
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
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 5896);
    InsertFirst(&First, 28);
    InsertFirst(&First, 298);
    Display(First);

    DisplayPallindrome(First);

    return 0;
}
