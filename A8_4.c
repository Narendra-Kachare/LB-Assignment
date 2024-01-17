// Write a program which accept number from user and return the count of odd Digits.

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

int MultDigit(int iNo)
{
    int iDigit = 0, iAns = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iNo = iNo / 10;
            iDigit = iNo % 10;
        }
        
        iAns = iAns * iDigit;
        iNo = iNo / 10;
    }
    return iAns;
    

}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);
    
    printf("%d",iRet);

    return 0;
}