/* Write a program to find factorial of given number
 Input : 5
 Output : 120       (5 * 4 * 3  * 2 * 1)
 
 Input : -5
 Output : 120       (5 * 4 * 3  * 2 * 1)
 
 Input : 4
 Output : 24        (4 * 3  * 2 * 1)

*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iAns = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       iAns = iCnt * iAns;
       
    }
    return iAns;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d\n",iRet);


    return 0;

}