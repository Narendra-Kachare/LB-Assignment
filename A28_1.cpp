/*
    Write a program which accept one number and position from usesr and check whether bit at
    that position is on or off. If bit is one return TRUE otherwise return False
    
    Input : 10  2
    Output : TRUE
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

bool ChkBit(UINT iNo, int iPos)
{
    UINT iResult = 0;
    UINT iMask = 0x00000001;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;
    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    UINT iValue = 0, iBit = 0;
    bool bRet = false;

    cout<<"Enter the number"<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position range(1-32)"<<"\n";
    cin>>iBit;

    bRet = ChkBit(iValue,iBit);
    if (bRet == true)
    {
        cout<<"Bit is ON"<<"\n";
    }
    else
    {
        cout<<"Bit is OFF"<<"\n";
    }
    
    return 0;
}

