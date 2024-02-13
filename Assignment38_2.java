/*
 *  write a java program which accept number of rows and number of columns from
 * user and display below pattern
 * 
 *      Input : iRow = 4    iCol = 4
 *      
 *      Output :    A   B   C   D 
 *                  a   b   c   d
 *                  A   B   C   D
 *                  a   b   c   d
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


class Assignment38_2
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
        char ch = 'A';
        for(int i = 0; i < Arr.length; i++)
        {
            if(i % 2 == 0)
            {
                ch = 'A';
            }
            else
            {
                ch = 'a';
            }
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = ch;
                ch++;
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