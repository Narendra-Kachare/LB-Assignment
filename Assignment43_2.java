/*
 *  Write a java program which accept two arrys from users and return
 *  minimum element of each array
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

class Assignment43_2
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
        obj1.MinArray(Arr1, Arr2);
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    public void MinArray(int Arr1[], int Arr2[])
    {
        int iMin = Arr1[0], iCnt = 0;
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            if(iMin > Arr1[iCnt])
            {
                iMin = Arr1[iCnt];
            }
        }
        System.out.print("Minimum element of each array will be : "+iMin+"  ");
        iMin = Arr2[0];
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            if(iMin > Arr2[iCnt])
            {
                iMin = Arr2[iCnt];
            }
        }
        System.out.println(iMin);
    }

}