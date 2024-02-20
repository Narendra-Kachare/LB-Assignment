/*
    Write java program which accept array from user and replace each
    member with summation of its digit.

       Input  :  89  687  56   549  87   9 

       Output :  17  21  11  18  15  9

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment46_2
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the array size : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        
        
        Pattern obj1 = new Pattern();
        int Ret[] = obj1.SumArray(Arr);
        for(int i = 0; i < Ret.length; i++)
        {
            System.out.print(Ret[i]+"\t");
        }

        sobj.close();
        
        
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class Pattern
{


    public int[] SumArray(int Arr[])
    {
        int iDigit = 0, iSum = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            iSum = 0;
            while(Arr[i] != 0)
            {
                iDigit = Arr[i] % 10;
                iSum = iDigit + iSum;
                Arr[i] = Arr[i] / 10;
            }
            Arr[i] = iSum;
        }
        return Arr;

    }

    
}

