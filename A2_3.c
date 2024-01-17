//Accept on no from user if no is less than 10 then print "Hello" otherwise print "Demo"

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter The No : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}