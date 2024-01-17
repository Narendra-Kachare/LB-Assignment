/*
    Write a program which accept one number from user and check whether
    bit at first or bit at second position is on or off.
    
    Input : 10  2  4
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

bool ChkBit(UINT iNo, int iPos1, int iPos2)
{   
    UINT iMask1 = 0x00000001;
    iMask1 = iMask1 << (iPos1 - 1);

    UINT iMask2 = 0x00000001;
    iMask2 = iMask2 << (iPos2 - 1);
    
    UINT iResult1 = iMask1 & iNo;
    UINT iResult2 = iMask2 & iNo;

    return ((iResult1 == iMask1) || (iResult2 == iMask2));

}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    UINT iValue1 = 0;
    int iBit1 = 0, iBit2 = 0;
    bool bRet = false;
    
    cout<<"Enter the  number : \n";
    cin>>iValue1;

    cout<<"Enter the first position : \n";
    cin>>iBit1;

    cout<<"Enter the second position : \n";
    cin>>iBit2;

   

    bRet = ChkBit(iValue1,iBit1,iBit2);
    if (bRet == true)
    {
        cout<<iBit1<<" or "<<iBit2<<" bit is ON"<<"\n";
    }
    else
    {
        cout<<iBit1<<" or "<<iBit2<<" bit is OFF"<<"\n";
    }
    
    

    return 0;
}