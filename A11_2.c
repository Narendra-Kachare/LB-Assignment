/*
    Accept N number from user and and accept one another number as No and return index of first occurance of that NO.
    Input : N : 6
            No : 66
            Elements : 85   66  3   66  93  88
    
    Output : 1.
    
    Input : N  : 6
            No : 12
            Elements : 85   22  3   15  11  111
    
    Output : Absent.
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int FirstOcc(int *Arr, int iNo, int No)
{
    int iCount = 0, iCnt = 0;
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            break;
        }
        iCount++;
    }
    if (Arr[iCnt] != No)
    {
        return -1;
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

    iRet = FirstOcc(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("\nThere is no such number\n");
    }
    else
    {
        printf("\nFirst occurance of number is %d\n",iRet);
    }
    free(ptr);
    
    return 0;
}