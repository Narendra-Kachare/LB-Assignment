/*
    Accept N number from user and return largest number.
    Input : N : 6

            Elements : 85   66  3   66  93  88

    Output : 93.
    
*/
/////////////////////////////////////////////////
// Header
////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int Maximum(int *Arr,int iLength)
{
    int iCnt = 0, iLargest = Arr[0];
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iLargest <= Arr[iCnt] )
        {
            iLargest = Arr[iCnt];
        }
    }
    

    return iLargest;
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iRet = 0;
    int *ptr = NULL;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);
    
    printf("Enter %d elements\n",iSize);
    ptr = (int *)malloc(sizeof(int) * iSize);
    if (ptr == NULL)
    {
        printf("Unable to allocate memory\n");
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

    iRet = Maximum(ptr,iSize);
    
    printf("Largest element is %d\n",iRet);

    free(ptr);

    return 0;
}