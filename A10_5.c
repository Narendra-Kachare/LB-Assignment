/*
    Accept N number from user and return frequency of 'No' numbers.

    Input : N : 6
            No : 66

            Elements : 85   66  3   66  93  88
    
    Output : 2.
    
    Input : N : 6

            Elements : 85   6  3   15  11  111
    
    Output : 1.

    
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int Check(int *Arr, int iNo, int No)
{
    int iCount = 0;
    for (int iCnt = 0; iCnt < iNo; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            iCount++;
        }
       
    }
    return iCount;
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);
    if (ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Enter elements: \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the number you want to check\n");
    scanf("%d",&iValue);

    printf("Enter elements are : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }


    iRet = Check(ptr,iSize,iValue);
    printf("\nFrequency of %d in the array is %d\n",iValue,iRet);
    
    return 0;
}
