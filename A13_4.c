/*
3.We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25 rupees per kilometre.
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after
100 kilometres.
We have to accept number of kilometres from user and return the estimated rent..

Input: 73   Output: 1825 
Input: 132   Output: 2980
Input: 189  Output: 3835


*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>



/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

int TouristBill(int iKilometer)
{
    int iRent = 0;
    if (iKilometer < 100)
    {
        iRent = 25 * iKilometer;
        return iRent;
    }
    else if (iKilometer >= 100)
    {
        iKilometer = iKilometer - 100;
        iRent = 15 * iKilometer + 2500;
        return iRent;
    }
    
    
}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance  covered by car in KM\n");
    scanf("%d",&iValue);

    iRet = TouristBill(iValue);

    printf("Input : %d\t\tOutput : %d",iValue,iRet);
    
    return 0;
    
}