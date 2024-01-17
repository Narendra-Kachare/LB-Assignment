/*

    Accept the character from user and check whether it is alphabet or not
    (A-Z a-z).

    Input  : F
    Output : TRUE

    Input  : &
    Output : FALSE


*/


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

BOOL ChkAplha(char ch)
{
        if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))  
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: \n");
    scanf("%c",&ch);

    bRet = ChkAplha(ch);
    if(bRet == TRUE)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not a character\n");
    }

    return 0;
}

