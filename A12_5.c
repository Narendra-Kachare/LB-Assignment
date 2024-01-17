/*
    Accept N number from user and Display all such number which contains 3 digitSumDigitSums in it.
    Input : N : 6

            Elements : 8225   665  3   76  953  858

    Output :    17  17  3   13  17  21
    
*/
/////////////////////////////////////////////////
// Header
////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void DigitSum(int *Arr,int iLength)
{
    int iCnt = 0, iDigit = 0, Digit = 0, Sum = 0;
    printf("Output will be : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iDigit = Arr[iCnt];
        Sum = 0;
        while(iDigit != 0)
        {
            Digit = iDigit % 10;
            Sum = Digit + Sum;
            iDigit = iDigit / 10;
        }
        printf("%d\t",Sum);
        
    }
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);
    
    printf("Enter %d elements\n",iSize);
    ptr = (int *)malloc(sizeof(int) * iSize);
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter elements are\n");
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    printf("\n");

    DigitSum(ptr,iSize);

    free(ptr);

    return 0;
}