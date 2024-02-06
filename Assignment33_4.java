
/*

    Write a java program which accept string from  
    user and check whether string contqin vowel or not.

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
class Assignment33_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String name = sobj.nextLine();

        StringDemo obj1 = new StringDemo();

        boolean bRet = obj1.ChkVowel(name);
        if(bRet == true)
        {
            System.out.println("String contain vowels");
        }
        else
        {
            System.out.println("String dosen't contain vowels");
        }

        sobj.close();

    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        str = str.replaceAll("\\s+", "").trim();
        boolean bret = false;
        if(str.length() == 0)
        {
            return bret;
        }
        str = str.toLowerCase();
        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((str.charAt(iCnt) == 'a') || (str.charAt(iCnt) == 'e') || (str.charAt(iCnt) == 'i') || (str.charAt(iCnt) == 'o') || (str.charAt(iCnt) == 'u'))
            {
                bret =  true;
                break;
            }
            
        }
        return bret;
    }




}