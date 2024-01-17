/*
Write a program which accept string from user and check whether 
it contains vowels in it or not. . 
    
    Input : “Marvellous” 
    Output :  TRUE

    Input : Demo 
    Output :  TRUE

    Input : XYZ 
    Output :  FALSE

    



*/


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////
BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        
        if ((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }
        str++;

    }
    

}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    char Arr[20];
    BOOL bRet = TRUE;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);
    if (bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}

