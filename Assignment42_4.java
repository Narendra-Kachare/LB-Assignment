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
        int iRet[] = obj1.ArrayConcate(Arr1, Arr1.length, Arr2, Arr2.length);
        System.out.println("Updated Array will be : ");
        for(int iCnt = 0; iCnt < iRet.length; iCnt++)
        {
            System.out.print(iRet[iCnt]+"\t");
        }
        System.out.println();

        sobj.close();


    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    public int[] ArrayConcate(int Arr1[],int iSize1, int Arr2[], int iSize2)
    {
        int Arr[] = new int[iSize1+iSize2];

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr[iCnt] = Arr1[iCnt];
        }
        int iTemp = iCnt;
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
                Arr[iTemp] = Arr2[iCnt];
                iTemp++;
        }
        return Arr;
    }
}