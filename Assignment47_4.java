
/*
    Write a program which accept matrix and return largest number from both the 
    diagonals.

    Input :     Number = 2

        8       9       4       5

        4      11       14       6

        6       6       6       7

        9       8       5       4

    Output : 14

*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment47_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of Rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter size of Columns : ");
        int j = sobj.nextInt();

        Matrix obj1 = new Matrix(i,j);
        int iRet[][] = obj1.Accept(i, j);
        obj1.Display(iRet, i, j);
        obj1.AddColumn(iRet, i, j);
        
        // System.out.println("Largest number from both of the matrix is : "+Ret);
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
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the matrix elements : ");
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

    public void Display(int Arr[][], int iRow, int iCol)
    {
        System.out.println("Matrix will be : ");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println("\n");
        }
    }

    public void AddColumn(int Arr[][], int iRow, int iCol)
    {
        int Ans[] = new int[iCol];

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(i == 0)
                {
                    Ans[j] = Arr[i][j];
                }
                else
                {
                    Ans[j] = Ans[j] + Arr[i][j];
                }
            }
        }
        System.out.println("Addition of element from each column is : ");
        for(int iSum : Ans)
        {
            System.out.print(iSum+"\t");
        }
    }
}