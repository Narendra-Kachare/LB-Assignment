/*
    Write a program which accept one number and position from usesr and off
    that bit. Return Modified Number
    Input : 10  2
    Output : 8
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

UINT OffBit(UINT iNo, int iPos)
{
    UINT iResult = 0;
    UINT iMask = 0x00000001;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;
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
    UINT iValue = 0, iBit = 0;
    UINT iRet = false;

    cout<<"Enter the number"<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position range(1-32)"<<"\n";
    cin>>iBit;

    iRet = OffBit(iValue,iBit);
    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

