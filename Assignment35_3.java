
/*
    Write a java program which accept number from user and return 
    the count of even digits.

    Input : 2395
    Output : 1

    Input : 1018
    Output : 0
    
    Input : -1018
    Output : 0
    
    Input : 8462
    Output : 2
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment35_3
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();


        Digit obj1 = new Digit();
        int iRet = obj1.CounntRange(iValue);

        System.out.println("Count of digit in between 3 and 7 is : "+iRet);

        sobj.close();

    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class Digit
{

    public int CounntRange(int iNo)
    {
        int iDigit = 0, iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3) && (iDigit <= 7))    
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }


}