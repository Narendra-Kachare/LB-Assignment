/*
    Accept N number from user and and accept one another number as No check whether No is present or Not.

    Input : N : 6
            No : 66
            Elements : 85   66  3   66  93  88
    
    Output : Present.
    
    Input : N : 6
            No :6
            Elements : 85   22  3   15  11  111
    
    Output : Absent.

    
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0



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
    BOOL bRet = FALSE;
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


    bRet = Check(ptr,iSize,iValue);
    if (bRet == TRUE)
    {
        printf("\nNumber is present\n");
    }
    else
    {
        printf("\nNumber is absent\n");
    }
    
    free(ptr);
    
    return 0;
}
