// write a program which accept number from useer and print that number of $ & * on screen

/*
    Input :     5 
    Output :    $ * $ * $ * $ * $ * 

*/

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt= 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }


}

int main()
{
    int iValue = 0;

    printf("Enter the No : \n");
    scanf("%d",&iValue);

    Pattern(iValue);



    return 0;
}