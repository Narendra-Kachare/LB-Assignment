/*
Write a program which accept string from user and display only digits from that string.

    
    Input : “marve89llous121” 

    Output :  89121

    Input : Demo

    Output : 

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        else
        {
            printf("");
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

    DisplayDigit(ch);

    return 0;
}