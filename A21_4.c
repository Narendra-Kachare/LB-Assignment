/*

Accept the character from user and check whether it is special symbol or not
(!, @, #, $, %, ^, &, *)

Input: % 
Output : TRUE 

Input: d 
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

BOOL ChkSpecial(char ch)
{
   if ((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
    if (bRet == TRUE)
    {
        printf("It is Special character.\n");
    }
    else
    {
        printf("It is not special character\n");
    }

    return 0;
}

