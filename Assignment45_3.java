/*
    1. Write a java program which accept number of rows and number of 
columns from user and display below pattern. 

        Input:          iRow = 4         iCol = 4

        Output: 
                        *       *       *       *       *       *


                        *                               *       *


                        *                       *               *


                        *               *                       *


                        *       *                               *


                        *       *       *       *       *       *
*/

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment45_3
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of row : ");     
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the size of row : ");     
        int iNo2 = sobj.nextInt();


        
        Pattern obj1 = new Pattern();
        obj1.pattern(iNo1, iNo2); 

        sobj.close();
        
        
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////
class Pattern
{
    public void pattern(int iRow, int iCol)
    {
        System.out.println("Pattern will be : ");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = iCol-1; j > -1; j--)
            {
                if(i == j)
                {
                    System.out.print("*\t");
                }
                else if((j == iCol-1) || (j == 0) || (i == iRow-1) || (i == 0))
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(" \t");
                }
            }
            System.out.println("\n\n");
        }
    }
}

