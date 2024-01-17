/*
    Accept number rows and columns from user and display below pattern

    Input : iRow = 4            iCol = 4

    Output :    A   B   C   D
                A   B   C   D
                A   B   C   D
                A   B   C   D
                

*/
/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Hwlper function
/////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    for ( i = 1; i <= iRow; i++)
    {
        for ( j = 1, ch = 'A'; j <= iCol; j++)
        {
            printf("%C\t",ch);
            ch++;
        }
        printf("\n\n");
        
    }
    
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    

    printf("Enter number of Rowa\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}