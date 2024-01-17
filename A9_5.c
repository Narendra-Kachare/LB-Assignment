/*
    Accept N number from user and display all such elements which are
    multiple of 11.

    Input : N : 6
            Elements : 85   66  3   80  93  88
    Output : 66 55  88
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void Display(int *Arr, int iNo)
{
    printf("\nOutput\n");
    for (int iCnt = 0; iCnt < iNo; iCnt++)
    {
        if (Arr[iCnt] % 11 == 0)
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
    int iSize = 0, iCnt = 0;
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

    Display(ptr,iSize);
    free(ptr);

    return 0;
}
