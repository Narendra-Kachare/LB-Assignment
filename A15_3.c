/*
    Accept number rows and columns from user and display below pattern

    Input : iRow = 4            iCol = 3

    Output :    5   4   3   2   1
                5   4   3   2   1
                5   4   3   2   1

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
    for ( i = 1; i <= iRow; i++)
    {
        for ( j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
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