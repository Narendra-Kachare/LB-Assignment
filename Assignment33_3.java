
/*

    Write a java program which accept string from  
    user and return difference betwenn frequency of small characters
    and frequecy of capital characters.

    Input : "MarvellouS
    Output : 6   (8-2)
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment33_3
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String name = sobj.nextLine();

        StringDemo obj1 = new StringDemo();

        int iRet1 = obj1.CountSmall(name);

        int iRet2 = obj1.CountCapital(name);

        System.out.println("Diference between freequcy of small & capital character is : "+(iRet1-iRet2));

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