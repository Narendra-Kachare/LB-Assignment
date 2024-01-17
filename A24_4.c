/*
Write a program which accept string from user and accept one character.
Return index of last occurance of that character.

    
    Input : “MarvellouS Multi OS”
            Character : 'M'

    Output :  11

    Input : “MarvellouS Multi OS”
            Character : 'W'

    Output :  -1

    Input : “MarvellouS Multi OS”
            Character : 'e'

    Output :  4
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#define FALSE -1
#define TRUE 1

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int LastChar(char * str, char cValue)
{
    int iCount = 0;
    int iPos = 0;
    int Flag = FALSE;
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            if ((*str == cValue) || ((*str + 32) == cValue))
            {
                iPos = iCount;
                Flag = TRUE;
            }
            
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            if ((*str == cValue) || ((*str - 32) == cValue))
            {
                iPos = iCount;
                Flag = TRUE;
            }
        }
        str++;
        iCount++;
    }
    if ((*str == '\0') && (Flag == FALSE))
    {
        iPos = FALSE;
    }
    
    return iPos;
    
}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    char ch1[20];
    char ch2 = '\0';
    int iRet = 0;

    printf("Enter the name\n");
    scanf("%[^'\n']s",ch1);

    printf("Enter the character that you want to search\n");
    scanf(" %c",&ch2);

    iRet = LastChar(ch1,ch2);
    
    if (iRet == FALSE)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("The index of the character is %d\n",iRet);
    }

    return 0;
}