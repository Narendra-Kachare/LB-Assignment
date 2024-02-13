/*
 *  write a java program which accept number of rows and number of columns from
 * user and display below pattern
 * 
 *      Input : iRow = 4    iCol = 5
 *      
 *      Output :    4   4   4   4   4
 *                  3   3   3   3   3   
 *                  2   2   2   2   2   
 *                  1   1   1   1   1
 * 
 */



/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////


class Assignment38_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iNo2 = sobj.nextInt();

        Pattern obj1 = new Pattern(iNo1, iNo2);

        obj1.pattern();   
        obj1.Display();
        sobj.close();


    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class Pattern
{
    public int Arr[][];

    public Pattern(int i, int j)
    {
        Arr = new int[i][j];
    }

    public void pattern()
    {
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = Arr.length-i;
            }
        }
    }

    public void Display()
    {
        System.out.println("Pattern will be : ");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}