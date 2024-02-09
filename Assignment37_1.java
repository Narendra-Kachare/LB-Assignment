
/*
  write a java program wwhich accept 2 strings from user and concat N character of second
  string after first string Value of N should be accepted from user.

  Note : If third parameter is greater than the size of second string then concat
  whole string after first string.

    Input : "Marvellous Infosystem"
            "Logic Building"
            5
    
    Output : "Marvellous Infosystem Logic"
    
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment37_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter First string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String : ");
        String str2 = sobj.nextLine();

        System.out.println("Enter the character size that you want to concat : ");
        int iNo = sobj.nextInt();

        StringDemo obj1 = new StringDemo();
        String sRet = obj1.StrNCatX(str1, str2, iNo);

        System.out.println("Updated string is : "+sRet);
        sobj.close();

    }  
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class StringDemo
{
    
    public String StrNCatX(String src, String dest, int iCnt)
    {
        char Brr[] = new char[iCnt];
        if(iCnt > dest.length())
        {
            iCnt = dest.length();
        }
        
        for(int i = 0; i < iCnt; i++)
        {

            Brr[i] = dest.charAt(i);
        }
        String sret = new String(Brr); 
        return (src+" "+sret);

    }

}