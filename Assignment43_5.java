/*
        Write a java program which accept  an array from user and check 
        whether that array and its elements are palindrome or not.

        Input : 11  252 387783  252 11
        Output : TRUE

        Input : 11  252 387783  77 11
        Output : FALSE

        Input : 11  252  786  252 11
        Output : FALSE

        Input : 11  252  786  253 11
        Output : FALSE


*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment43_4
{
    public  static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        int iNo = 0;

        System.out.println("Enter the number of elements :");
        try
        {
            iNo = sobj.nextInt();
        }
        catch(Exception E)
        {
            System.out.println("Invalid Input");
            return;
        }

        int Arr1[]=new int[iNo];
        System.out.println("Enter elements : ");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            try
            {
                Arr1[iCnt] = sobj.nextInt();
            }
            catch(Exception e)
            {
                System.out.println("Invalid Input");
                return;
            }
            
        }

        MyArray obj1 = new MyArray();
        boolean bRet = obj1.ChkPallindrome(Arr1);
        if(bRet == true)
        {
            System.out.println("Given Array is  pallindrome");
        }
        else
        {
            System.out.println("Given Array is not pallindrome");
        }

    }
}



/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    public boolean ChkPallindrome(int Arr1[])
    {   
        boolean Result = true;
        int i = 0;
        ArrayList <Integer> ArrL = new ArrayList<>();
        for(i = 0; i < Arr1.length; i++)
        {
            if(Arr1[i] != Arr1[(Arr1.length-1) - i])
            {
                Result = false;
                break;
            }

            else if(i == Arr1.length-1-i)
            {
                int iNo = Arr1[i];
                int iDigit = 0;

                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    ArrL.add(iDigit);
                    iNo = iNo / 10;
                }
                for(int j = 0; j < ArrL.size(); j++)
                {
                    if(ArrL.get(j)!= ArrL.get(ArrL.size()-1-j))
                    {
                        Result=false;
                        break;
                    }
                }
            }
        }


        return Result;
    }
}

