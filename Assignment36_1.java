
/*
    Write a java program which accept N number from user and accept
    one another number as NO, check whether is present or not.

    Input : 
            N : 6
            NO : 66
            Elements : 85   66  3   66  93  88
    
    Output : TRUE

    
    Input : 
            N : 6
            NO : 12
            Elements : 85   66  3   66  93  88
    
    Output : FALSE
    
*/ 
/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment36_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of elements : ");
        int iNo1 = sobj.nextInt();
        int Arr[] = new int[iNo1];

        System.out.println("Enter the elements : ");
        for(int iCnt = 0; iCnt < iNo1; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        System.out.println("Enter the number that you want to search : ");
        int iNo2 = sobj.nextInt();

        Number obj1 = new Number();
        boolean bRet = obj1.Check(Arr,iNo2);
        if(bRet == true)
        {
            System.out.println("No is Present");
        }
        else
        {
            System.out.println("No is Absent");
        }


        sobj.close();

    }  
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class Number
{
    
    public boolean Check(int Arr[], int iNo)
    {

        boolean bTemp = false;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                bTemp = true;
                break;
            }
        }
        return bTemp;

    }

}