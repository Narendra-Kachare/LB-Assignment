/*
    Write a program which accept one number from user and Toggle
    contents of first and last nibble of the number. Return Modified Number (Nibble is group of 4 bits)
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

UINT ToggleBit(UINT iNo)
{
    return(iNo ^ 0xF000000F);
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

    iRet = ToggleBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

