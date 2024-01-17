/*
    Write a program which accept one number from user and off 7th bit of that
    number if it is on. return modified number

    Input : 79
    Output : 15
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
    UINT iResult = 0;
    UINT iMask = 0x00000040;

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
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

