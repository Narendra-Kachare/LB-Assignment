/*
 *  write a java program which accept number of rows and number of columns from
 * user and display below pattern
 * 
 *      Input : iRow = 3    iCol = 3
 *      
 *      Output :    
 *                  *       #       *       #
 *                  *       #       *       #
 *                  *       #       *       #
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


class Assignment39_4
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
    public char Arr[][];

    public Pattern(int i, int j)
    {
        Arr = new char[i][j];
    }

    public void pattern()
    {
        char ch[] = new char[2];
        ch[0] = '*';
        ch[1] = '#';

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(j % 2 == 0)
                {
                    Arr[i][j] = ch[0];
                }
                else
                {
                    Arr[i][j] = ch[1];
                }
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