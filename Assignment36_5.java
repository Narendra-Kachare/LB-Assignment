
/*
    Write a java program which accept N number from user and return product 
    of all odd elements.
    Input : 
            N : 6
            Elements : 15   66  3   70  10  88
    
    Output : 45

    
    Input : 
            N : 6
            Elements : 44   66  72   70  10  88
    
    Output : 0
    
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
        
        Number obj1 = new Number();
        int iRet = obj1.Product(Arr);

        System.out.println("Product of odd elements is : "+iRet);

        sobj.close();


    }  
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class Number
{
    
    public int Product(int Arr[])
    {
        int iMult = 1, iTemp = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 != 0 )
            {
                iMult = iMult * Arr[iCnt];
                iTemp = 1;

            }
        }
        if(iTemp == 0)
        {
            return 0;
        }
        return iMult;
    }

}