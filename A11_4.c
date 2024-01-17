/*
    Accept N number from user and and accept Range, Display all elements from that range.
    Input : N : 6
            Start : 60
            End   : 90
            Elements : 85   66  3   76  93  88

    Output :    85  66  76  88.
    
    Input : N  : 6
            Start : 30
            End   : 50
            Elements : 85   66  3   76  93  88
    
    Output : .
*/
/////////////////////////////////////////////////
// Header
////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void Range(int *Arr,int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    printf("Output will be :\t");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iSize = 0, iValue1 = 0, iValue2 = 0;
    int *ptr = NULL;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);
    
    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

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

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);

    return 0;
}