/*

    Accept the character from user and check whether it is capital or not
    (A-Z).

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

BOOL ChkCapital(char ch)
{
        if((ch >= 'A') && (ch <= 'Z'))  
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

    bRet = ChkCapital(ch);
    if(bRet == TRUE)
    {
        printf("It is Capital character\n");
    }
    else
    {
        printf("It is not a Capital character\n");
    }

    return 0;
}

