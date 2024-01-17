/*
Write a program which accept string from user and count number of 
capital characters. 
    
    Input : “Marvellous Multi OS” 
    Output :    4



*/


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {

        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
    

}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("Capital count charater is %d\n",iRet);
    

    return 0;
}

