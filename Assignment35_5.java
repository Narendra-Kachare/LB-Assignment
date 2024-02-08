
/*
    Write a java program which accept number from user and return 
    and return difference between summation of even digits and summation of odd digits.

    Input : 2395
    Output : -15 (2 - 17)

    Input : 1018
    Output : 6 (8 - 2)
    
    Input : 8440
    Output : 16 (16 - 0)
    
    Input : 5733
    Output : -18 (0 - 18)
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment35_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();


        Digit obj1 = new Digit();
        int iRet = obj1.CountDiff(iValue);

        System.out.println("Summation of even & odd digits is : "+iRet);

        sobj.close();

    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class Digit
{

    public int CountDiff(int iNo)
    {
        int iDigit = 0, Ans1 = 0, Ans2 = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)    
            {
                Ans1 = Ans1 + iDigit;
            }
            else
            {
                Ans2 = Ans2 + iDigit;
            }
            iNo = iNo / 10;
        }
        return (Ans2 - Ans1);
    }

}