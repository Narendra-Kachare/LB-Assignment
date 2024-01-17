/*
3. Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different. For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 23450.
We have to accept standard from user and display the corresponding fees.

Input: 2   Output: 12790 
Input: 4   Output: 23450
Input: 6  Output: Wrong Input


*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

#define WRONG_INPUT -1

/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

int Schoolfees(int iStandard)
{
    int fees = 0;
    if (iStandard < 0)
    {
        iStandard = -iStandard;
    }
    
   switch (iStandard)
   {
        case 1:
            fees = 8900;
            break;

        case 2:
            fees = 12970;
            break;
        
        case 3:
            fees = 21000;
            break;

        case 4:
            fees = 23450;
            break;
    
        default:
            fees = WRONG_INPUT;
            break;
    }
    return fees;
    

}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Standard from 1 to 4 : \n");
    scanf("%d",&iValue);

    iRet = Schoolfees(iValue);
    if(iRet == WRONG_INPUT)      //
    {
        printf("Input : %d\t\tOutput : Wrong Output",iValue);
    }
    else
    {
        printf("Input : %d\t\tOutput : %d",iValue,iRet);
    }
    
    
    return 0;
    
}