/*
Write a program which accept string from user and count number of 
difference between frequency of small characters and frequecy of capital characters. 
    
    Input : “MarvellouS” 
    Output :    6 (8 - 2)



*/


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////
int Difference(char *str)
{
    int iCount1 = 0, iCount2 = 0;
    while (*str != '\0')
    {

        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCount2++;
        }
        str++;
    }
    return (iCount1-iCount2);
    

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

    iRet = Difference(Arr);
    printf("Difference is %d\n",iRet);
    

    return 0;
}

