/*
Write a program which accept string from user and count number of white spaces.

    
    Input : “MarvellouS”

    Output :  0

    Input : "MarvellouS System"

    Output : 1

    Input : "MarvellouS Infosystem by Piyus Manohar Khairnnar"

    Output : 5

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
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
    char ch[20];
    int iRet = 0;

    printf("Enter the name\n");
    scanf("%[^'\n']s",ch);

    iRet = CountWhite(ch);
    printf("White spaces in the string is %d\n",iRet);

    return 0;
}