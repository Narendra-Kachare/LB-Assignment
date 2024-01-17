/*
    Write a program which accept string from user reverse that string in place.

    Input : "abcd"

    Output : "dcba"

    Input : "abba"

    Output : "abba"
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char Temp = '\0';

    start = str;
    end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;
    while (start < end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;

        start++;
        end--;
    }
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Enter the name : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Reverse string is %s\n",Arr);

    return 0;
}