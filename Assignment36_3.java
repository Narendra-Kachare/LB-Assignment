
/*
    Write a java program which accept N number from user and accept
    one another number as NO, return the last index of that NO
    Input : 
            N : 6
            NO : 66
            Elements : 85   66  3   66  93  88
    
    Output : 4

    
    Input : 
            N : 6
            NO : 12
            Elements : 85   66  3   66  93  88
    
    Output : -1
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment36_3
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
        int iRet = obj1.LastOcc(Arr,iNo2);


        if(iRet == iNo1)
        {
            System.out.println("Number is not found");
        }
        else
        {

            System.out.println("Last occurance of given number is : "+(iRet+1));
        }

        sobj.close();

    }  
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class Number
{
    
    public int LastOcc(int Arr[], int iNo)
    {

        int iTemp = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iTemp = iCnt;
            }
        }
        return iTemp;

    }

}