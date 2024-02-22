
/*
   Write a program which accept matrix and swap the contents of consecutive rows. 

    Input :

    3       2       5       9
    
    4       3       2       2

    8       4       1       5
    
    3       9       7       5

    Output : 

    4       3       2       2

    3       2       5       9

    3       9       7       5

    8       4       1       5



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
        iRet = obj1.SwapRows(iRet, i, j);
        obj1.Display(iRet, i, i);
        
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

    public int[][] SwapRows(int Arr[][], int iRow, int iCol)
    {
        int iTemp[] = new int[iCol];

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(((iRow % 2) != 0) && (i == (iRow-1)) && (j == 0))
                {
                    break;
                }
                if(i % 2  == 0)
                {
                    iTemp[j] = Arr[i][j];
                    Arr[i][j] = Arr[i+1][j];
                }
                else
                {
                    Arr[i][j] = iTemp[j];
                }
            }
        }
        return Arr;
    }
}