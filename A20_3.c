/*

    Accept the character from user and check whether it is digit or not (0-9).
    (A-Z).

    Input  : 7
    Output : TRUE

    Input  : d
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

BOOL ChkDigit(char ch)
{
        if((ch >= '0') && (ch <= '9'))  
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

    bRet = ChkDigit(ch);
    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}

