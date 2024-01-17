/*
    Accept N number from user and display all such elements which are
    divisible by 5.

    Input : N : 6
            Elements : 85   66  3   80  93  88
    Output : 85     80
*/
/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
// Helper function.
/////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    printf("The elements which are divisible by 5 are :\n");
    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 5 == 0)
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
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    printf("\n");

    Display(ptr,iLength);

    free(ptr);

    return 0;
}

