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

class Assignment44_1
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the input string : ");        
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", "");

        char Arr[] = str.toCharArray();
        MyArray obj1 = new MyArray();
        obj1.ArrayReplace(Arr);
        sobj.close();
        
        
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    public void ArrayReplace(char Arr[])
    {
        System.out.println("Characters in small case : ");
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = (char)(Arr[i] + 32);
                
            }
            System.out.print(Arr[i]+"\t");
        }
    }
}
