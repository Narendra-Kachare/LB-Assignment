/*
    Write a program which accept one number from user and off 7th and 10th bit of that
    number if it is on. return modified number
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

UINT ToggleBit(int iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x00000240;

    return(iMask ^ iNo);
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

    iRet = ToggleBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

