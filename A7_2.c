// Write a program which accept number from user and check whether it contains 0 in it or not

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////
// Helper
/////////////////////////////////////////////////

BOOL DisplayDigit(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0) 
        {
            break;
        }
        iNo = iNo / 10;
    }
    if(iDigit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = DisplayDigit(iValue);
    if(bRet == TRUE)
    {
        printf("It contain 0\n");
    }
    else
    {
        printf("There is no zero\n");
    }

    return 0;
}