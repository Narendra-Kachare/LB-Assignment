/*

   write a program which displays ASCII table. Table contains symbol,
   Decimal, Hexadecimal and Octal representaion of every member from 0 to 255.

*/


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void DisplayASCII()
{
    char ch = '\0';
    for (int iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%x\t%o: %c\n",ch,ch,ch,ch);
        ch++;
    }
    
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    DisplayASCII();

    return 0;
}

