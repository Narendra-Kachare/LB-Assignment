
/*
    Write a java program which accept number from user and return 
    the count of even digits.

    Input : 2395
    Output : 3

    Input : 1018
    Output : 2
    
    Input : -1018
    Output : 2
    
    Input : 8462
    Output : 
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment35_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();


        Digit obj1 = new Digit();
        int iRet = obj1.CountOdd(iValue);

        System.out.println("Count of odd digit is : "+iRet);

        sobj.close();

    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class Digit
{

    public int CountOdd(int iNo)
    {
        int iDigit = 0, iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)    
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }


}