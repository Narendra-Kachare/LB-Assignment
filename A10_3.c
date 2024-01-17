/*
    Accept N number from user and return frequency of even numbers.

    Input : N : 6

            Elements : 85   66  11   80  93  88
    
    Output : 11 is present.
    
    Input : N : 6

            Elements : 85   66  3   80  93  88
    
    Output : 11 is absent.

    
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

int Check(int *Arr, int iNo)
{
    int iCount = 0, iCount2 = 0;
    BOOL flag = FALSE; 
    for (int iCnt = 0; iCnt < iNo; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            flag = TRUE;
            break;
        }
    }
    return flag;
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
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
    printf("Enter elements are : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }

    bRet = Check(ptr,iSize);
    if (bRet == TRUE)
    {
        printf("\n11 is present\n");
    }
    else
    {
        printf("\n11 is absent\n");
    }
    
    
    return 0;
}
