/*
    Accept N number from user and Display all such number which contains 3 digits in it.
    Input : N : 6

            Elements : 8225   666  3   76  953  858

    Output : 3  953.
    
*/
/////////////////////////////////////////////////
// Header
////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void Digit(int *Arr,int iLength)
{
    int iCnt = 0, iDigit = 0, Digit = 0;
    printf("Output will be : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iDigit = Arr[iCnt];
        while(iDigit != 0)
        {
            Digit = iDigit % 10;
            if(Digit == 3)
            {
                printf("%d\t",Arr[iCnt]);
                break;
            }
            iDigit = iDigit / 10;
        }
        
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

    Digit(ptr,iSize);

    free(ptr);

    return 0;
}