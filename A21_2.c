/*

Accept character from user. if character is small display its corresponding capital character
and if it small then display its corresponding capital. in other cases diplay as it is.

Input: Q
Output : q

Input: d 
Output : D 

Input: % 
Output : % 

Input: 8
Output : 8 
*/


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c",ch);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("%c",ch);

    }
    else    
    {
        ch = ch;
        printf("%c",ch);

    }
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

