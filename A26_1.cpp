/*
    Write a program checks whether 15th bit is ON or OFF

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
    UINT iMask = 0x00004000;    

    iResult = iMask & iNo;
    if (iResult == iMask)   //15th Bit is ON
    {
        return true;
    }
    else        // 15th Bit is OFF
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
        cout<<"15th Bit is ON"<<"\n";
    }
    else
    {
        cout<<"!5th Bit is OFF"<<"\n";
    }

    return 0;
}

