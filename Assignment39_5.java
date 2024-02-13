/*
 *  write a java program which accept number of rows and number of columns from
 * user and display below pattern
 * 
 *      Input : iRow = 4    iCol = 4
 *      
 *      Output :    1   1   1   1
 *                  2   2   2   2
 *                  3   3   3   3
 *                  4   4   4   4
 *              
 * 
 * 
 */



/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////


class Assignment39_5
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
                    Arr[i][j] = i+1;
            }
        }
    }

    public void Display()
    {
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