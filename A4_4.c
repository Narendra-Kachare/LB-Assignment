// Write a program which accept three no and print its multiplication

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{   
    if((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
    {
        printf("Input Must be other than Zero\n");
        return 0;

    }
    else
    {
        int iMult = 0;

        iMult = iNo1 * iNo2 * iNo3;

        return iMult;
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    

    printf("Enter the three No : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is %d",iRet);









    return 0;
}