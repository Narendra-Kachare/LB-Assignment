/*
Write a program which accept string from user and display it in a reverse order
    
    Input : “Marvellous” 
    Output :  “SuollevraM” 

*/


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////
void Reverse(char *src, char *dest)
{
    int iCnt = 0;
    while (*src != '\0')
    {
        src++;
        iCnt++;
    }
    src--;
    while (iCnt != 0)
    {
        *dest = *src;
        src--;
        iCnt--;
        dest++;
    }
    *dest = '\0';
    
    

}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr,Brr);
    printf("Your reverse name will be : %s",Brr);

    return 0;
}

