// Write a program which accept number from user and return difference between summation of even diigit and summation of odd digits.
/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, iEven = 0, iOdd = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
           iEven = iEven + iDigit;
        }
        else if ((iDigit % 2) != 0)
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
        
    }
    return (iEven - iOdd);
    

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

    iRet = CountDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}