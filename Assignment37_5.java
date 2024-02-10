
/*
  write a java program wwhich accept  string from user and check
  whether the string is palindrome or not without considering its case.

Input : "AbcCBa"

Output : "TRUE"
  
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////


class Assignment37_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringDemo obj1 = new StringDemo();

        boolean bRet = obj1.StrPallindrome(str);
        if(bRet == true)
        {
            System.out.println("Given string is in pallindrome");
        }
        else
        {
            System.out.println("Given string is not in pallindrome");
        }
        sobj.close();
    }



}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class StringDemo
{
    public boolean StrPallindrome(String str)
    {
        str = str.replaceAll("\\s+", " ").trim().toLowerCase();

        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];
        int i = 0;
        
        for(int iCnt = (Arr.length-1); iCnt > -1; iCnt--)
        { 
                Brr[i] = Arr[iCnt];
                i++;
        }
        if(Arrays.equals(Arr, Brr))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}