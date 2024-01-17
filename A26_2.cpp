/*
    Write a program checks whether 5th  and  18th bit is ON or OFF

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
    UINT iMask = 0x00020010;    

    iResult = iMask & iNo;
    
    return (iResult == iMask);
   
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
        cout<<"5th and 18th Bit is ON"<<"\n";
    }
    else
    {
        cout<<"5th and 18th Bit is OFF"<<"\n";
    }

    return 0;
}

