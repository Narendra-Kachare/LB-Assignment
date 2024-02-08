
/*
    Write a java program which accept number from user and return 
    and return multiplication of all digit

    Input : 2395
    Output : 270

    Input : 1018
    Output : 8
    
    Input : 9440
    Output : 144
    
    Input : 922432
    Output : 864
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment35_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();


        Digit obj1 = new Digit();
        int iRet = obj1.Multiply(iValue);

        System.out.println("Multiplication of all digits is : "+iRet);

        sobj.close();

    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class Digit
{

    public int Multiply(int iNo)
    {
        int iDigit = 0, Ans = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            while(iDigit == 0)
            {
                iNo = iNo / 10;
                iDigit = iNo % 10;
            }

            Ans = Ans * iDigit;

            iNo = iNo / 10;
        }
        return Ans;
    }


}