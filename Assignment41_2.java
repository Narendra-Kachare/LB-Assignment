/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////
class Assignment41_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string  : ");
        String name = sobj.nextLine();

        Pattern obj1 = new Pattern(name.length(), name.length());
        obj1.pattern(name);

        obj1.Display();
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
        StringBuffer str1 = new StringBuffer(str);
        str1 = str1.reverse();
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = Arr.length-1; j > -1; j--)
            {
                if(i <= j)
                {
                    Arr[i][j] = str1.charAt(j);
                }
                else
                {
                    Arr[i][j] = '*';
                }
            }
            System.out.println();
        }
    }

    public void Display()
    {
        System.out.println("Output pattern will be : ");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = Arr.length-1; j > -1; j--)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}