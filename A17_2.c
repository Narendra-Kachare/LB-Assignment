/*
    Accept number rows and columns from user and display below pattern

    Input : iRow = 4            iCol = 4

    Output :    2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
                    
                
                

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
    int i = 0, j = 0, iTemp = 1;
    if (iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }
    
    for ( i = 1; i <= iRow; i++)
    {
        for ( j = 0; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",(iTemp*2 -1));
            }
            else
            {
                printf("%d\t",(iTemp*2));
            }
            iTemp++;
            if (iTemp > (iRow+1))
            {
                iTemp = 1;
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