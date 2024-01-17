/*
Write a program which accept string from user and accept one character.
Return index of first occurance of that character.

    
    Input : “MarvellouS Multi OS”
            Character : 'M'

    Output :  0

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

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int FirstChar(char * str, char cValue)
{
    int iCount = 0;
    while (*str != '\0')        //0
    {
        if((*str >= 'a') && (*str <= 'z'))      //1
        {
            if ((*str == cValue) || ((*str - 32) == cValue))    //2
            {
                break;
            }
        }
        else if((*str >= 'A') && (*str <= 'Z'))     //4
        {
            if ((*str == cValue) || ((*str + 32) == cValue))        //5
            {
                break;
            }
        }
        str++;      //6
        iCount++;       //7
        int iPos = iCount;
    }
    if (*str == '\0')
    {
        return FALSE;
    }
    
    return iCount;
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

    iRet = FirstChar(ch1,ch2);
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