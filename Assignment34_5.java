
/*
    Write a java program which accept N number from user and display
    all such elements which are divisible by 11 .

    Input :  N = 6
            Elements : 85   66  3   80  93  88
    Output : 80

*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment34_5
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
        obj1.Display(Arr);

        sobj.close();
    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class ArrayDemo
{

    public void Display(int Arr[])
    {
        System.out.println("Elements of array which is divisible by 11 is : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 11 == 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }


    }

}