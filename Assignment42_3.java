/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

import java.util.Scanner;

class Assignment42_4
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
        obj1.DisplayOdd(Arr1, Arr2);

        sobj.close();


    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    public void DisplayOdd(int Arr1[], int Arr2[])
    {
        System.out.println("Elements of the first array will be : ");
        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            if(Arr1[iCnt] % 2 != 0)
            {
                System.out.print(Arr1[iCnt]+"\t");
            }
        }
        System.out.println();
        
        System.out.println("Elements of the second array will be : ");
        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            if(Arr2[iCnt] % 2 != 0)
            {
                System.out.print(Arr2[iCnt]+"\t");
            }
        }
    }
}