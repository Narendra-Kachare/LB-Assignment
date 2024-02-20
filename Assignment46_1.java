/*
    Write java program which accept array from user and reverse each 
number of that array. 

       Input:   89  68756  549   87  9 

       Output:  98  78665  945   78  9 

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment46_1
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
        obj1.ReverseArray(Arr);

        sobj.close();
        
        
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class Pattern
{


    public void ReverseArray(int Arr[])
    {
        int iDigit = 0, Output = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            Output = 0;
            while(Arr[i] != 0)
            {
                iDigit = Arr[i] % 10;
                Output = iDigit + (Output*10);
                Arr[i] = Arr[i] / 10;
            }
            System.out.print(Output+"\t"); 
        }

    }

    
}

