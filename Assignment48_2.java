
/*
   Write a program which accept matrix and reverse the contents of each row.


    Input :
            3      2       5       9

            4      3       2       2

            3      9       7       5

            8      4       1       5



    Output : 
            3       4       8       3

            2       3       4       9

            5       2       1       7

            9       2       5       5


*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment48_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();

        int iRet[][] = new int[iRow][iCol];
        Matrix obj1 = new Matrix(iRow, iCol);

        iRet = obj1.Accept(iRow, iCol);
        iRet = obj1.ReverseRow(iRet, iRow, iCol);
        obj1.Display(iRet);

        sobj.close();
    }
}

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class Matrix
{
    public int Arr[][];
    public Matrix(int i, int j)
    {
        Arr = new int[i][j];
    }


    public int[][] Accept(int iRow, int iCol)
    {
        System.out.println("Enter the elements : ");
        Scanner sobj = new Scanner(System.in);
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
            System.out.println();
        }

        sobj.close();
        return Arr;
    }

    public void Display(int Arr[][])
    {
        System.out.println("Matrix will be : ");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println("\t");
        }
    }

    public int[][] ReverseRow(int Arr[][], int iRow, int iCol)
    {
        int ArrR[][] = new int[iRow][iCol];

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                ArrR[i][j] = Arr[i][iRow-1-j];
            }
        }
        return ArrR;

    }
}