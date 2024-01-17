/*
Write a program which accept string from user and accept one character.
check whether that character is present in string or not.

    
    Input : “MarvellouS Multi OS”
            Character : 'e'

    Output :  TRUE

    Input : “MarvellouS Multi OS”
            Character : 'W'

    Output :  FALSE
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

BOOL ChkChar(char * str, char cValue)
{
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
            if (*str == cValue)
            {
                return TRUE;
            }
            
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
            if (*str == cValue)
            {
                return TRUE;
            }
            
        }
        str++;
    }
    return FALSE;
}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    char ch1[20];
    char ch2 = '\0';
    BOOL bRet = FALSE;

    printf("Enter the name\n");
    scanf("%[^'\n']s",ch1);

    printf("Enter the character that you want to search\n");
    scanf(" %c",&ch2);

    bRet = ChkChar(ch1,ch2);
    if (bRet == TRUE)
    {
        printf("Character is found\n");
    }
    else
    {
        printf("Character is not found");
    }
    
    

    return 0;
}