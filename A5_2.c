// write a program which accept number from useer and print that number till that Number

/*
    Input :     8
    Output :    1   2   3   4   5   6   7   8

*/

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt= 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }


}

int main()
{
    int iValue = 0;

    printf("Enter the No : \n");
    scanf("%d",&iValue);

    Display(iValue);



    return 0;
}