/*
        Write Java program which accept array of characters from user and 
        replace each capital character with its corresponding small character.

        Input: b N j B R b A d G G

        Output: b n j b b a d g g

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment44_4
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the input string : ");        
        String str = sobj.nextLine();


        str = str.replaceAll("\\s+", "");

        char Arr[] = str.toCharArray();
        
        MyArray obj1 = new MyArray();
        int iRet = obj1.Difference(Arr);
        System.out.println("Difeerence between small & capital character is : "+iRet);
        sobj.close();
        
        
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class MyArray
{
    public int Difference(char Arr[])
    {
    

        int iCount1 = 0, iCount2 = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(((Arr[i] >= 'A') && (Arr[i] <= 'Z')))
            {
                iCount1++;
                
            }
            if(((Arr[i] >= 'a') && (Arr[i] <= 'z')))
            {
                iCount2++;
                
            }
        }
        return (iCount1-iCount2);
    }
}

