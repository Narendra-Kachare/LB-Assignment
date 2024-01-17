// Write a program which accept number from user and return the count of odd Digits.

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit < 7 )  && (iDigit > 3 )) 
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    

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

    iRet = CountRange(iValue);
    
    printf("%d",iRet);

    return 0;
}