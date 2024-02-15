/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////
class Assignment41_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string  : ");
        String name = sobj.nextLine();

        Pattern obj1 = new Pattern(name.length(), name.length());
        obj1.pattern(name);

        sobj.close();



    }
}


/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class Pattern
{
    public char Arr[][];

    public Pattern(int i, int j)
    {
        Arr = new char[i][j];
    }

    public void pattern(String str)
    {
        

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(i >= j)
                {
                    Arr[i][j] = str.charAt(j);
                    System.out.print(Arr[i][j]+"\t");
                }
                else
                {
                    Arr[i][j] = '#';
                    System.out.print(Arr[i][j]+"\t");
                }
            }
            System.out.println();
        }

        StringBuffer str1 = new StringBuffer(str);
        str1 = str1.reverse();

        for(int i = 1; i < Arr.length; i++)
        {
            for(int j = Arr.length-1; j > -1; j--)
            {
                if(i <= j)
                {
                    Arr[i][j] = str1.charAt(j);
                    System.out.print(Arr[i][j]+"\t");
                }
                else
                {
                    Arr[i][j] = '#';
                    System.out.print(Arr[i][j]+"\t");
                }
            }
            System.out.println();
        }
    }

    

}