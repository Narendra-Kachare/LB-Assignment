/*
    Accept N number from user and and accept Range, Display all elements from that range.
    Input : N : 6

            Elements : 15   66  3   70  10  88

    Output : 45.
    
    Input : N  : 6

            Elements : 44   66  72  70  10  88
    
    Output : 0.
*/
/////////////////////////////////////////////////
// Header
////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int Product(int *Arr,int iLength)
{
    int Ans = 1, iCnt = 0;
    int Flag = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        
        if (Arr[iCnt] % 2 != 0)
        {
            Flag = 1;
            Ans = Ans * Arr[iCnt];
        }
    }
    if (Ans == 1)
    {
        if(iCnt == iLength && Flag == 0)
        {
            Ans = 0;
        }
    }

    return Ans;
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

    iRet = Product(ptr,iSize);
    printf("Product is %d\n",iRet);

    free(ptr);

    return 0;
}