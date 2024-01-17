/*
    Accept number from user and display below pattern

    Input : 5

    Output : A  B   C   D   E
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
    char ch = 'A';
    for (int iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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