
/*
    Write a program which accept matrix from user and return addition of diagonal 
    elements.

    Input :     
        1   2   3
        1   2   3
        1   2   3

    Output : 6

*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment47_1
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
        int Ret = obj1.AddDiagonal(iRet, i, j);
        
        System.out.println("Addition of diagonal element is : "+Ret);
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

    public int AddDiagonal(int Arr[][], int iRow, int iCol)
    {
        int Ans = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    Ans = Ans + Arr[i][j];
                }
            }
            System.out.println("\n");
        }
        return Ans;
    }



}