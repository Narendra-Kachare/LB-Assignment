/*
Write a program which accept string from user and convert it into lower case.
    
    Input : “Marvellous Multi OS” 
    Output :  marvellous multi os

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void strlwX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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

    strlwX(ch);

    printf("Your name is %s",ch);

    return 0;
}