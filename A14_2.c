/*
    Accept number from user and display below pattern

    Input : 5

    Output : #  5   #   4   #   3   #   2   #   1   
*/
/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Hwlper function
/////////////////////////////////////////////////

void Pattern(int iNo)
{
    for (int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("#\t%d\t",iCnt);
    }
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}