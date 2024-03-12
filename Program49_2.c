/*

    Write a program which number from user and display below pattern

    Input :  7846

    Output :  *   *   *   *


*/ 


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>



/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

int* Number(int iNo)
{
    int iDigit = 0, i = 0;
    int *Arr = (int*)malloc(sizeof(int));

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        Arr[i++] = iDigit;
        iNo = iNo / 10;
        
    }
    Arr[i] = '\0';
    
    return Arr;
    
}



void Pattern(int *Arr)
{
    for(int i = 0; i < sizeof(Arr); i++)
    {
        for(int j = 0; j < Arr[i]; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iNo = 0;

    printf("Enter number : ");
    scanf("%d",&iNo);

    int *Ret = Number(iNo);
    int i = 0;

    Pattern(Ret);



    return 0;
}

