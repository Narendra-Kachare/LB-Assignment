// Write a program which accepttotal marks & obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(int TMarks, int OMarks)
{
    float fPrcnt = 0.0f;
    fPrcnt = ((OMarks / TMarks) * 100);
    return fPrcnt;


}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please Enter Total Marks : \n");
    scanf("%d",&iValue1);

    printf("Please Enter Obtained Marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("You will Get %f",fRet);

    


    return 0;
}






