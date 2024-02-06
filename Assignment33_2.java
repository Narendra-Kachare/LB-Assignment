
/*

    Write a java program which accept string from  
    user and count number of small characters

    Input : "Marvellous
    Output : 9
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment33_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String name = sobj.nextLine();

        StringDemo obj1 = new StringDemo();

        int iRet = obj1.CountSmall(name);
        System.out.println("Total count of small character is : "+iRet);

        sobj.close();

    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class StringDemo
{
    public int CountSmall(String str)
    {
        int iCount = 0;
        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((str.charAt(iCnt) >= 'a') && (str.charAt(iCnt) <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;

    }






}