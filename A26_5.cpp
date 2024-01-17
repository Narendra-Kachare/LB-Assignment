/*
    Write a program checks whether 7th & 8th & 9th bit is ON or OFF

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

bool CheckBit(int iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x80000001;    

    iResult = iMask & iNo;
    if (iResult == iMask)   //1st and 32th (last) Bit is ON
    {
        return true;
    }
    else        //1st and 32th (last) Bit is OFF
    {
        return false;
    }
   
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number :"<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if (bRet == true)
    {
        cout<<"1st and 32th (last) Bit is ON"<<"\n";
    }
    else
    {
        cout<<"1st and 32th (last) Bit is OFF"<<"\n";
    }

    return 0;
}

