/*
    Accept N number from user and return difference between summation of 
    even elements and summation of odd elemets.

    Input : N : 6
            Elements : 85   66  3   80  93  88
    Output : 53     (234 - 181)
*/
/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
// Helper function.
/////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int Even = 0, Odd = 0;
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            Even = Even + Arr[iCnt];
        }
        else
        {
            Odd = Odd + Arr[iCnt];
        }
    }
    return(Even - Odd);

}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    printf("Enter the Elements\n");
    ptr = (int *)malloc(sizeof(int) * iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements are :\n");
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }

    iRet = Difference(ptr,iLength);

    printf("Result is %d\n",iRet);

    free(ptr);

    
    
    




    return 0;
}

