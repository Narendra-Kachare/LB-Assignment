//Accept the no from user and print that no of * on screen

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}



int main()
{
    int iValue = 0;
    
    printf("Enter the No\n");
    scanf("%d",&iValue);


   
    Accept(iValue);

   

    return 0;
}