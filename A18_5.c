/*
    Accept number rows and columns from user and display below pattern

    Input : iRow = 4            iCol = 4

    Output :    1   2   3   4
                1   *   *   4
                1   *   *   4
                1   2   3   4
                    
                
                

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
    int i = 0, j = 0, iCnt = 1;
    if (iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }
    
    for ( i = 1; i <= iRow; i++)
    {
        for ( j = 1; j <= iCol; j++)
        {
            if ((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }
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
    

    printf("Enter number of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}