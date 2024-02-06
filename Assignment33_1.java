
/*

    Write a java program which accept string from  
    user and count number of capital characters

    Input : "Marvellous Multi OS"

    Output : 4
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment33_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String name = sobj.nextLine();

        StringDemo obj1 = new StringDemo();

        int iRet = obj1.CountCapital(name);
        System.out.println("Total count of capital character is : "+iRet);

        sobj.close();

    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCount = 0;
        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((str.charAt(iCnt) >= 'A') && (str.charAt(iCnt) <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;

    }






}