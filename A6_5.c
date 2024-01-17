/* Write a program which accept a number from user and display its table in Reverse order
 Input  : 2
 Output : 20    18  16  14  12  10  8   6   4   2
 
 Input  : 5
 Output : 50  45  40  35  30  25  20  15  10  5


 Input  : -5
 Output : 50  45  40  35  30  25  20  15  10  5
 

*/

#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo < 0)     //Updator
    {
        iNo = -iNo;
    }
    int iCnt = 0, iAns = 1;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
       iAns = iCnt * iNo;
       printf("%d\t",iAns);
       
    }
    

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;

}