/*

    Accept the division of student from usesr and depends on the division display exam timing. There are 4 divisions
    in school as A,B,C,D. Exam of divisions A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
    (Application should be case insensitive)

    Input  : C
    Output : Your exam at 9.20 AM

    Input  : d
    Output : Your exam at 10.30 AM

*/


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if (((chDiv >= 'A') && (chDiv <= 'D'))|| ((chDiv >= 'a') && (chDiv <= 'd')))
    {
        if ((chDiv == 'A') || (chDiv == 'a'))
        {
            printf("Your Exam at 7 AM");
        }
        else if ((chDiv == 'B') || (chDiv == 'b'))
        {
            printf("Your Exam at 8.30 AM");
        }
        else if ((chDiv == 'C') || (chDiv == 'c'))
        {
            printf("Your Exam at 9.20 AM");
        }
        else if ((chDiv == 'D') || (chDiv == 'd'))
        {
            printf("Your Exam at 10.30 AM");
        }
        
    }
    else
    {
        printf("Invalid Input");
    }
    
    
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    char ch = '\0';
    
    printf("Enter your Division: \n");
    scanf("%c",&ch);

    DisplaySchedule(ch);
    return 0;
}

