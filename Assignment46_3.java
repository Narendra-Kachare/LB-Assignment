/*
    Write java program which accept array of characters from user and 
    count number of capital characters.

       Input  :   b N j B R b A d G G

       Output :  6

*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment46_3
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine().replaceAll("\\s+", "");

        char Arr[] = str.toCharArray();

        
        MyArray obj1 = new MyArray();

        int Ret = obj1.ArrayCapital(Arr);
        System.out.println("Total count of capital character is : "+Ret);

        sobj.close();
        
        
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class MyArray
{


    public int ArrayCapital(char Arr[])
    {
        int iCount = 0;
        for (int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i]  <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }

    
}

