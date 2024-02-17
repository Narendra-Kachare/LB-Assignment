/*
 *  Write a java program which accept two array from user and copy 
the contents of that array into another array and return new array. 
 *  
 *  Input : 2   9   7   5   2   3  
 *          9   3   5   5
 *  
 *  Output : 2   9   7   5   2   3   9   3   5   5
 * 
 */


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment43_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0, iNo = 0;

        System.out.println("Enter number of elements for Arr1[] : ");
        iNo = sobj.nextInt();
        int Arr1[] = new int[iNo];
        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)        
        {
            Arr1[iCnt] = sobj.nextInt();
        }
        System.out.println();
        
        System.out.println("Enter number of elements for Arr2[] : ");
        iNo = sobj.nextInt();
        int Arr2[] = new int[iNo];
        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)        
        {
            Arr2[iCnt] = sobj.nextInt();
        }
        System.out.println();
        
        int Rev[] = new int[iNo];
        MyArray obj1 = new MyArray();
        Rev = obj1.CopyArray(Arr1,Arr2);
        System.out.println("Output array will be : ");
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
    
    public int[] CopyArray(int Arr1[], int Arr2[])
    {
        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = 
        }


    }

}
