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
    return ((0x000001C0 & iNo) == 0x000001C0);
   
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
        cout<<"7th & 8th & 9th bit is ON"<<"\n";
    }
    else
    {
        cout<<"7th & 8th & 9th bit is OFF"<<"\n";
    }

    return 0;
}

