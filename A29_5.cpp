/*
    Write a program which accept one number from user and range of
    positions from user. Toggle all bits from that range.
    
    Input : 897   9   13
    Output : Toggle all bits from position 9 to 13 of input number i.e 897 --> 7297
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

int TogggleBitRange(UINT iNo, int iStart, int iEnd)
{   
    UINT iMask1 = 0x00000001;
    iMask1 = iMask1 << (iStart - 1);

    UINT iMask2 = 0x00000001;
    iMask2 = iMask2 << (iEnd - 1);

    UINT iResult = iNo & iMask1;
    
    /*
        iCount = iEnd - iStart
        while(iCount != -1)
        {
            //LOGIC
            iCount--;
        }
    */
    while (iMask1 <= iMask2)        
    {
        iResult = iNo & iMask1;
        if (iResult == iMask1)
        {
            iNo = iNo ^ iMask1;
        }
        else
        {
            iNo = iNo ^ iMask1;
        }

        iMask1 = iMask1 << 1;
    }
    return iNo;
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    UINT iValue1 = 0;
    int iBit1 = 0, iBit2 = 0;
    int iRet = 0;
    
    cout<<"Enter the  number : \n";
    cin>>iValue1;

    cout<<"Enter the start position for toggle : \n";
    cin>>iBit1;

    cout<<"Enter the end position for toggle: \n";
    cin>>iBit2;

    iRet = TogggleBitRange(iValue1,iBit1,iBit2);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}