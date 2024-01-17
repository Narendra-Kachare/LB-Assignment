/*
Write a program which accept string from user and toggle the case.
    
    Input : “Marvellous Multi OS” 
    Output :  mARVELLOUS mULTI os

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void strupX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        
        str++;
        
    }
    
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    char ch[20];

    printf("Enter the name\n");
    scanf("%[^'\n']s",ch);

    strupX(ch);

    printf("Your name is %s",ch);

    return 0;
}