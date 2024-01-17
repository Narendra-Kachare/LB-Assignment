/*

Accept the character from user and display its ASCII value in 
decimal, ocatal and hexadecimal format

Input : A
Output :    Decimal 65
            Octal  0101
            Hexadecimal 0*41

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
    printf("Decimal\t%d\n",ch);
    printf("Octal\t%o\n",ch);
    printf("Hexadecimal\t%x\n",ch);

    
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

