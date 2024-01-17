/*
    Accept N number from user and return frequency of even numbers.

    Input : N : 6
            Elements : 85   66  3   80  93  88
    Output : 3
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int CountEven(int *Arr, int iNo)
{
    int iCount = 0;
    for (int iCnt = 0; iCnt < iNo; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
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
    int iSize = 0, iCnt = 0, iRet = 0;
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
    printf("Enter elements are : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }

    iRet = CountEven(ptr,iSize);
    printf("Result is  %d\n",iRet);
    free(ptr);

    return 0;
}
