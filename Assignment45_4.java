/*
    1. Write a java program which accept number of rows and number of 
columns from user and display below pattern. 

        Input:          iRow = 6         iCol = 6

        Output: 
                        *       *       *       *       *       *

                        *       #       #       #       *       *

                        *       #       #       *       $       *

                        *       #       *       $       $       *

                        *       *       $       $       $       *

                        *       *       *       *       *       *
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment45_4
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of row : ");     
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the size of row : ");     
        int iNo2 = sobj.nextInt();

        
        
        Pattern obj1 = new Pattern(iNo1, iNo2);
        obj1.pattern(iNo1, iNo2); 
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

    public void pattern(int iRow, int iCol)
    {
        if(iRow != iCol)
        {
            System.out.println("Rows and columns must be same");
            return;
        }
        
        for(int i = 0; i < Arr.length; i++) // Rows
        {
            for(int j = Arr[i].length-1; j > -1; j--)   // Column
            {
                
                if((j == Arr[j].length-1) || (j == 0) || (i == Arr[i].length-1) || (i == 0) || (i == j))
                {
                    Arr[i][j] = '*';
                }
                else if(i < j)
                {
                    Arr[i][j] = '#';
                }
                else if(i  > j)
                {
                    Arr[i][j] = '$';
                }

            }
        }
    }

    public void Display()
    {
        System.out.println("Pattern will be : ");
        for(int i = 0; i < Arr.length; i++) // Rows
        {
            for(int j = Arr[i].length-1; j > -1; j--)   // Column
            {
                System.out.print(Arr[i][j]+"\t");                
            }
            System.out.println("\n");
        }
    }
    
}

