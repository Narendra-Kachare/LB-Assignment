/*
 *  Write a java program which accept two arrys from users and return
 *  difference between summation of arrays
 *  
 *  Input : 2   9   7   5   2   3  
 *          9   3   5   5
 *  
 *  Output : 6
 * 
 */


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment43_1
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

        MyArray obj1 = new MyArray();
        iNo = obj1.DiffArray(Arr1, Arr2);
        System.out.println("Difference between summation is : "+iNo);
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    public int DiffArray(int Arr1[], int Arr2[])
    {
        int Ans1 = 0, Ans2 = 0, iCnt = 0;
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Ans1 = Ans1 + Arr1[iCnt];
        }
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Ans2 = Ans2 + Arr2[iCnt];
        }
        return (Ans1-Ans2);
    }
}