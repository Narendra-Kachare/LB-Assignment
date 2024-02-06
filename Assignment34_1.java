
/*
    Write a java program which accept N number fr6om user and return
    difference between summation of even elements and summation of odd 
    elements.

    Input :  N = 6
            Elements : 85   66  3   80  93  88
    Output : 53 (234 - 181)

*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment34_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iNo1 = sobj.nextInt();

        int Arr[] = new int[iNo1];

        System.out.println("Enter the elements : ");
        for(int iCnt= 0; iCnt < iNo1; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        ArrayDemo obj1 = new ArrayDemo();
        int iRet = obj1.Difference(Arr);
        System.out.println("Difference between summation of Even & Odd elements is : "+iRet);

        sobj.close();
    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class ArrayDemo
{

    public int Difference(int Arr[])
    {
        int Ans1 = 0, Ans2 = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                Ans1 = Arr[iCnt] + Ans1;
            }
            else
            {
                Ans2 = Ans2 + Arr[iCnt];
            }
        }

        return (Ans1-Ans2);


    }

}