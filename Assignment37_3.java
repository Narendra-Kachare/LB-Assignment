
/*
  write a java program wwhich accept 2 strings from user and 
  check whether first N contents of two strings are equal or not.

Input : "Marevellous Infosystems"
        "Marevellous Logic Building"
        10

Output : True
  
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////


class Assignment37_3
{
    public static void main(String Args[])
    {


        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String : ");
        String str1 = sobj.nextLine();


        System.out.println("Enter Second String  : ");
        String str2 = sobj.nextLine();

        System.out.println("Enter the frequency range : ");
        int iNo = sobj.nextInt();

        sobj.close();

        StringDemo obj1 = new StringDemo();
        boolean bRet = obj1.StrCmpX(str1, str2, iNo);

        if(bRet == true)
        {
            System.out.println("Strings are identical");
        }
        else
        {
            System.out.println("Strings are not identical");
        }
    }



}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class StringDemo
{
    public boolean StrCmpX(String src, String dest, int iCnt)
    {
        int i = 0;
        src = src.replaceAll("\\s+", " ").trim().toLowerCase();
        dest = dest.replaceAll("\\s+", " ").trim().toLowerCase();


        String Arr1[] = src.split(" ");
        String Arr2[] = dest.split(" ");

        for(i = 0; i < iCnt+1; iCnt++)
        {
            if(Arr1[i] != Arr2[i])
            {
                break;
            }
        }
        if(i == iCnt+1)
        {
            return false;
        }
        else
        {
            return true;
        }

    }
}