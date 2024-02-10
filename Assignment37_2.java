
/*
  write a java program wwhich accept 2 strings from user and 
  check whether content of two strings are equal or not.

Input : "Marevellous Infosystems"
          "Marevellous Infosystems"

Output : True
  
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////


class Assignment37_2
{
    public static void main(String Args[])
    {


        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String : ");
        String str1 = sobj.nextLine();


        System.out.println("Enter Second String  : ");
        String str2 = sobj.nextLine();
        sobj.close();


        StringDemo obj1 = new StringDemo();
        boolean bRet = obj1.StrCmpX(str1, str2);

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
    public boolean StrCmpX(String src, String dest)
    {
        src = src.replaceAll("\\s+", " ").trim().toLowerCase();
        dest = dest.replaceAll("\\s+", " ").trim().toLowerCase();

        if(src.length() != dest.length())
        {
            return false;
        }

        String Arr1[] = src.split(" ");
        String Arr2[] = dest.split(" ");

        if(Arrays.equals(Arr1, Arr2))
        {
            return true;
        }
        else
        {
            return false;
        }


    }
}