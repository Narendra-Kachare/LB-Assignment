
/*
Write a program which accept matrix and check whether the mstrix is identity matrix or not.

    Identity matrix is a square matrix with 1’s.along the diagonal from upper left to 
    lower right and 0’s in all other positions. 
    If it satisfies the structure as explained before then the matrix is called as 
    identity matrix. 

    Input :
            1      0       0       0

            0      1       0       0

            0      0       1       0

            0      0       0       1



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

class Assignment48_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the Columns : ");
        int iCol = sobj.nextInt();

        int Ret[][] = new int[iRow][iCol];
        Matrix obj1 = new Matrix(iRow, iCol);
        Ret = obj1.Accept(iRow, iCol);
        obj1.Display(Ret);
        boolean bRet = obj1.CheckIdentity(Ret, iRow, iCol);
        if(bRet == true)
        {
            System.out.println("Given matrix is identity Matrix");
        }
        else
        {
            System.out.println("Given matrix is not identity matrix");
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

    public boolean CheckIdentity(int Arr[][], int iRow, int iCol)
    {
        boolean Check = true;
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if((i == j) && (Arr[i][j] != 1))
                {
                    Check = false;
                    break;
                }
                else if(i != j && Arr[i][j] != 0)
                {
                        Check = false;
                        break;
                }
            }
            System.out.println();
        }


        return Check;
    }
}