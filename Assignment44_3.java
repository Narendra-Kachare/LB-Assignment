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

class Assignment44_3
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the input string : ");        
        String str = sobj.nextLine();

        System.out.println("Enter the character that you want to search : ");
        char ch = sobj.next().charAt(0);

        str = str.replaceAll("\\s+", "");

        char Arr[] = str.toCharArray();
        
        MyArray obj1 = new MyArray();
        int iRet = obj1.Search(Arr, ch);
        System.out.println("Total count of the vowels is : "+iRet);
        sobj.close();
        
        
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class MyArray
{
    public int Search(char Arr[],char ch)
    {
        if(((ch >= 'A') && (ch <= 'Z')))
        {
            ch = (char)(ch + 32);
        }

        int iCount = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(((Arr[i] >= 'A') && (Arr[i] <= 'Z')))
            {
                Arr[i] = (char)(Arr[i] + 32);
                
            }
            if(Arr[i] == ch)
            {
                iCount++;
            }
        }
        return iCount;
    }
}

