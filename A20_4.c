/*

    Accept the character from user and check whether it is small case or not (a-z).

    Input  : g
    Output : TRUE

    Input  : D
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

BOOL ChkSmall(char ch)
{
        if((ch >= 'a') && (ch <= 'z'))  
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

    bRet = ChkSmall(ch);
    if(bRet == TRUE)
    {
        printf("It is Small case character\n");
    }
    else
    {
        printf("It is not a Small case character\n");
    }

    return 0;
}

