/*
    Write a program which accept two number from user and display position of
    commmon ON bits from that two numbers.
    
    Input : 10  15      (1010   1111)
    Output : 2   4     
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

int CommonBits(UINT iNo1, UINT iNo2)
{   
    int iMask = 0x00000001;
    int iResult = 0;
    int i = 1;
    bool Flag = false;
    cout<<"Position of common bits are : \n";
    while(i < 9)
    {   
        iResult = iMask & iNo1 & iNo2;
        if(iResult == iMask)
        {
            cout<<i<<"\t";
            Flag = true;
        }
        iMask = iMask << 1;

        i++;
    }
    if (Flag == false)
    {
        cout<<"None"<<"\n";
    }
}

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////

int main()
{
    UINT iValue1 = 0, iValue2 = 0;
    
    cout<<"Enter the first number : \n";
    cin>>iValue1;

    cout<<"Enter the second number : \n";
    cin>>iValue2;

    CommonBits(iValue1,iValue2);

    return 0;
}