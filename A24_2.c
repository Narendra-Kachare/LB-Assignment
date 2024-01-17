/*
Write a program which accept string from user and accept one character.
Return frequency of that character.

    
    Input : “MarvellouS Multi OS”
            Character : 'M'

    Output :  2

    Input : “MarvellouS Multi OS”
            Character : 'W'

    Output :  0
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int CountChar(char * str, char cValue)
{
    int iCount = '\0';
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            if ((*str == cValue) || ((*str - 32) == cValue))
            {
                iCount++;
            }
            
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            if ((*str == cValue) || ((*str + 32) == cValue))
            {
                iCount++;
            }
            
        }
        str++;
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

    iRet = CountChar(ch1,ch2);
    printf("The frequency of the character is %d",iRet);
    

    return 0;
}