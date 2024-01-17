/*
    Write a program which accept one number from user and check whether
    9th or 12th bit is on or off.
    
    Input : 257
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

bool ChkBit(UINT iNo)
{   
    UINT iMask1 = 0x00000100;
    UINT iMask2 = 0x00000800;
    UINT iResult = 0;

    iResult = (iMask1 & iNo) | (iMask2 & iNo);

    return ((iResult == iMask1) || (iResult == iMask2));

}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    UINT iValue1 = 0;
    bool bRet = false;
    
    cout<<"Enter the  number : \n";
    cin>>iValue1;

   

    bRet = ChkBit(iValue1);
    if (bRet == true)
    {
        cout<<"9th or 12th bit is ON"<<"\n";
    }
    else
    {
        cout<<"9th or 12th bit is OFF"<<"\n";
    }
    
    

    return 0;
}