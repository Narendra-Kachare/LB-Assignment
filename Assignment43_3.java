/*
 *  Write a java program which accept two arrys from users and copy
 *  the contents of that array into another array in reverse order and return new array
 *  
 *  Input : 2   9   7   5   2   3  
 *          9   3   5   5
 *  
 *  Output : 2  3
 * 
 */


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment43_3
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0, iNo = 0;

        System.out.println("Enter number of elements for Arr[] : ");
        iNo = sobj.nextInt();
        int Arr[] = new int[iNo];
        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)        
        {
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println();
        
        
        int Rev[] = new int[iNo];
        MyArray obj1 = new MyArray();
        Rev = obj1.CopyArrayRev(Arr);
        System.out.println("Reverse array will be : ");
        for(iCnt = 0; iCnt < Rev.length; iCnt++)
        {
            System.out.print(Rev[iCnt]+"\t");
        }

    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    int i = 0;
    public int[] CopyArrayRev(int Arr[])
    {
        int iCnt = 0, Rev[] = new int[Arr.length];
        for(iCnt = Arr.length-1; iCnt > -1; iCnt--)
        {
            Rev[i]  = Arr[iCnt];
            i++;
        }
        return Rev;
    }

}