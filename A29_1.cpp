/*
    Write a program which accept one number from user and count number of 
    on (1) bits in it without using % and / opeartor.
    
    Input : 11
    Output : 3

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

int CountOne(UINT iNo)
{   
    int iCount = 0;
    int iMask = 0x00000001;
    int i = 0;
    while(i < 8)
    {   
        int iResult = iNo & iMask;
        if(iMask == iResult)
        {
            iCount++;
        }
        iMask = iMask << 1;

        i++;
    }
    return iCount;
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    UINT iValue = 0;
    int iRet = 0;
    
    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = CountOne(iValue);
    cout<<"Count of ON bits in "<<iValue<<" is : "<<iRet<<"\n";

    return 0;
}