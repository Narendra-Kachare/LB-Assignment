
/*
    Write a java program which accept N number from user and accept
    Range, Display all elements from that range
    Input : 
            N : 6
            iStart = 60
            iEnd = 90
            Elements : 85   66  3   76  93  88
    
    Output : 85 66  76

    
    Input : 
            N : 6
            iStart = 100
            iEnd = 190
            Elements : 85   66  3   76  93  88
    
    Output : 
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment36_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of elements : ");
        int iNo = sobj.nextInt();
        int Arr[] = new int[iNo];

        System.out.println("Enter the elements : ");
        for(int iCnt = 0; iCnt < iNo; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        System.out.println("Enter the range starting point");
        int iNo1 = sobj.nextInt();

        
        System.out.println("Enter the range ending point");
        int iNo2 = sobj.nextInt();

        Number obj1 = new Number();
        obj1.Display(Arr,iNo1,iNo2);

        sobj.close();


    }  
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class Number
{
    
    public void Display(int Arr[], int iStart, int iEnd)
    {
        System.out.println("Elements in the given range are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
            {
                System.out.println(Arr[iCnt]+"\t");
            }
        }
    }

}