/*
    Write a program which accept one number from user and off 7th and 10th bit of that
    number if it is on. return modified number

    Input : 577
    Output : 1
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

int OffBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x00000240;

    iResult = iMask & iNo;

    if (iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

