/*
1. Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer.
If bill bill amount is less than 500 then there is no discount, if bill amount is less than 1500 and more than 500 they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.
Input: 1200                             Output: 1080
Input: 290                              Output: 290    
Input: 3700                             Output: 3145






*/
/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

float CalculateBill(int iAmount)
{
    float fTemp = iAmount;
    if(iAmount < 0)
    {
        iAmount = -iAmount;
    }
    if(iAmount < 500)
    {
        return iAmount;
    }
    else if(iAmount >= 500 && iAmount <= 1500)
    {
        iAmount = 0.1 * iAmount;
        return (fTemp - iAmount);
    }
    else if(iAmount > 1500)
    {
        iAmount = iAmount * 0.15;
        return (fTemp - iAmount - 1);
    }

}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    float fRet = 0.0f;

    printf("Enter the Billing Amount: \n");
    scanf("%d",&iValue);

    fRet = CalculateBill(iValue);
    printf("Input : %d\t Outpot : %f",iValue,fRet);
    return 0;
}