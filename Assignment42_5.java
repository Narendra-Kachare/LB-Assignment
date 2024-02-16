/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

import java.util.Scanner;

class Assignment42_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int Arr1[],Arr2[];
        

        System.out.println("Enter number of elements for first array: ");
        int iNo = sobj.nextInt();

        Arr1 = new int[iNo];
        System.out.println("Enter elements : ");
        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }
        System.out.println();
        System.out.println("Enter number of elements for second array: ");
        iNo = sobj.nextInt();
        Arr2 = new int[iNo];
        System.out.println("Enter elements : ");
        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }
        System.out.println();

        MyArray obj1 = new MyArray();
        obj1.SumArray(Arr1, Arr2);
        
        sobj.close();


    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    public void SumArray(int Arr1[], int Arr2[])
    {

        int Ans1 = 0, Ans2 = 0, iCnt = 0;
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Ans1 = Ans1 + Arr1[iCnt];
        }
        System.out.println("Summation of first array will be : "+Ans1);
        
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Ans2 = Ans2 + Arr2[iCnt];
        }
        System.out.println("Summation of second array will be : "+Ans2);
        
    }
}