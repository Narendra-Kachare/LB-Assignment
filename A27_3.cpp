/*
    Write a program which accept one number from user and off 7th bit of that
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

int ToggleBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x00000040;

    return(iMask ^ iNo);
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

    iRet = ToggleBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

