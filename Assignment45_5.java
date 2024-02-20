/*
    1. Write a java program which accept number of rows and number of 
columns from user and display below pattern. 

        Input:          iRow = 4         iCol = 4

        Output: 
                        1       2       3       4       5

                        1       2                       5

                        1               3               5

                        1                       4       5

                        1       2       3       4       5
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

        System.out.println("Enter the size of Row : ");     
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the size of Column : ");     
        int iNo2 = sobj.nextInt();

        
        
        Pattern obj1 = new Pattern();
        obj1.pattern((iNo1+1), (iNo2+1)); 

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
        if(iRow != iCol)
        {
            System.out.println("Rows and columns must be same");
            return;
        }
        System.out.println("Output pattern will be : ");
        for(int i = 1; i <= iRow; i++) // Rows
        {
            for(int j = 1; j <= iCol; j++)   // Column
            {
                
                if((j == iCol) || (j == 1) || (i == iRow) || (i == 1) || (i == j))
                {
                    System.out.print(j+"\t");
                }
                else
                {
                    System.out.print(" \t");
                }

            }
            System.out.println("\n");
        }
    }

    
}

