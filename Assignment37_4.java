
/*
  write a java program wwhich accept  string from user and 
  reverse the contents of that string by toggling the case.

Input : "aCBdef"

Output : "FEDcbA"
  
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////


class Assignment37_4
{
    public static void main(String Args[])
    {


        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringDemo obj1 = new StringDemo();

        String sRet = obj1.StrRevTogX(str);
        System.out.println("Updated string is : "+sRet);

        sobj.close();



    }



}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class StringDemo
{
    public String StrRevTogX(String str)
    {
        str = str.replaceAll("\\s+", " ").trim();

        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];
        int i = 0;
        
        for(int iCnt = (Arr.length-1); iCnt > -1; iCnt--)
        { 
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Brr[i] = (char)(Arr[iCnt] + 32);
            }
            else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Brr[i] = (char)(Arr[iCnt] - 32);
            }
            i++;
        }
        return new String(Brr);
    }
}