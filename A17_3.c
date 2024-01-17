/*
    Accept number rows and columns from user and display below pattern

    Input : iRow = 5            iCol = 5

    Output :     a       b       c       d       e
 
                 1       2       3       4       5
 
                 a       b       c       d       e
 
                 1       2       3       4       5
 
                 a       b       c       d       e
                    
                
                

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
    char ch = 'a';
    if (iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }
    
    for ( i = 1; i <= iRow; i++)
    {
        ch = 'a';
        for ( j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
                ch++;
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