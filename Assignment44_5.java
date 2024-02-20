/*
    Write Java program which accept array from user and display below 
    pattern. 

        Input: 8    9   7   6   4   2   4

        Output: 

        *   *   *   *   *   *   *   *   
        *   *   *   *   *   *   *   *   * 
        *   *   *   *   *   *   *
        *   *   *   *   *   *
        *   *   *   *
        *   *
        *   *   *   *
        
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment44_5
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");     
        int iNo = sobj.nextInt();
        int Arr[] = new int[iNo];

        System.out.println("Enter the elements : ");     
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        
        MyArray obj1 = new MyArray();
        obj1.Pattern(Arr);

        sobj.close();
        
        
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class MyArray
{
    public void Pattern(int Arr[])
    {

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i]; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

