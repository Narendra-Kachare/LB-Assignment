// Write a program which accept number from user and count Frequency of such digit which are less than 6.
/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>



/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6) 
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

    iRet = Count(iValue);
    
    printf("%d",iRet);

    return 0;
}