// write a program which accept N and print first 5 Multples of N
/*
    Input :   4
    Output :  4     8   12  16  20
*/

#include<stdio.h>
void MultiplyDisplay(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    for(iCnt= 1; iCnt <= 5; iCnt++)
    {
        iAns = iCnt * iNo;
        printf("%d\t",iAns);
          
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the No : \n");
    scanf("%d",&iValue);

    MultiplyDisplay(iValue);



    return 0;
}