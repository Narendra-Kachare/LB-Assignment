/*
    Accept number from user and display below pattern

    Input : 8

    Output : 2  4   6   8   10  12  14  16   

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
    int iAns = 0;
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iAns = 2 * iCnt;
        printf("%d\t",iAns);
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