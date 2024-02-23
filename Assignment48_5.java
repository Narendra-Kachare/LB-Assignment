
/*
   Write a program which accept matrix and Check whether the matrix is 
Sparse matrix or not. 

Sparse matrix is a matrix with the majority of its elements equal to zero. 

    Input :
            1       0       3       0

            0       6       0       0

            0       0       1       0

            9       0       0       9



    Output : 
            True


*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;


/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment48_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Columns : ");
        int iCol = sobj.nextInt();

        if(iRow != iCol)
        {
            System.out.println("Invalid input, Rows and columns are not same");
            sobj.close();
            return;
        }

        int Ret[][] = new int[iRow][iCol];
        Matrix obj1 = new Matrix(iRow, iCol);
        Ret = obj1.Accept(iRow, iCol);
        obj1.Display(Ret);
        boolean bRet = obj1.CheckSparse(Ret, iRow, iCol);
        if(bRet == true)
        {
            System.out.println("Given matrix is Sparse Matrix");
        }
        else
        {
            System.out.println("Given matrix is not Sparse matrix");
        }
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
        System.out.println("Enter the elements : ");
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
            System.out.println("\n");
        }
    }

    public boolean CheckSparse(int Arr[][], int iRow, int iCol)
    {
        int iCount = 0;
        boolean Check = false;
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == 0)
                {
                    iCount++;
                }
            }
            System.out.println();
        }

        iCol = (iCol * iCol)/2;
        if(iCount > iCol)
        {
            Check = true;
        }
        return Check;
    }
}