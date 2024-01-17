/*
2. Design application for income tax department to calculate tax amount. According to the income tax department there is no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20% tax. And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax amount.

Input: 450000   Output: 0 

Input: 600000   Output: 10000   (0 +10000)--> (0 + 10% Tax)

Input: 1200000  Output: 90000   (0 + 50000 + 40000)--> (50k + 20% Tax)

Input: 8200000  Output: 2110000 (0 + 50000 + 200000 + 1860000) --> (2.5L + 30% Tax)

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

float IncomeTax(int iAmount)
{
    float fAmount1 = 0.0f;
    if(iAmount < 0)         //Updator
    {
        iAmount = -iAmount;
    }
    if(iAmount <= 500000)
    {
        fAmount1 = 0.0f;
        return fAmount1;
    }
    else if((iAmount > 500000) && (iAmount <= 1000000))
    {
        iAmount = iAmount - 500000;
        fAmount1 = iAmount * 0.1;
        return fAmount1;
    }
    else if((iAmount > 1000000) && (iAmount <= 2000000))
    {
        iAmount = iAmount - 1000000;
        fAmount1 = iAmount * 0.2;
        fAmount1 = fAmount1 + 50000;
        return fAmount1;
    }
    else if(iAmount > 2000000)
    {
        iAmount = iAmount - 2000000;
        fAmount1 = iAmount * 0.3;
        fAmount1 = fAmount1 + 250000;
        return fAmount1;
    }
   

}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter the Billing Amount: \n");
    scanf("%d",&iValue);

    printf("Income Tax Payable Amount will be given below :\n");
    fRet = IncomeTax(iValue);

   
    printf("Input : %d\t Output : %f",iValue,fRet);

    return 0;
    
}