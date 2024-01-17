/*
    Write a program which accept one number from user and on its first 4 bits. 
    Return Modified number

    Input : 73          
    Output : 79
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

UINT OnBit(int iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x000000F;

    return(iMask | iNo);    
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

    iRet = OnBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}

