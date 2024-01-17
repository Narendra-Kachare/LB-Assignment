// Write a program which accept number from user and count Frequency of 2 in it.

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>



/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2) 
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

    iRet = CountTwo(iValue);
    
    printf("%d",iRet);

    return 0;
}