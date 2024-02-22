
/*
    Write a program which accept matrix and one number from user and return 
    frequency of that number. 

    Input :     Number = 2
        1   2   3
        1   2   3
        1   2   3

    Output : 3

*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment47_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of Rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter size of Columns : ");
        int j = sobj.nextInt();

        System.out.println("Enter the number that you want search : ");
        int iNo = sobj.nextInt();


        Matrix obj1 = new Matrix(i,j);
        int iRet[][] = obj1.Accept(i, j);
        obj1.Display(iRet, i, j);
        int Ret = obj1.iFrequency(iRet, i, j, iNo);
        
        System.out.println("Frequency of given number in matric is : "+Ret);
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

    public int iFrequency(int Arr[][], int iRow, int iCol, int iNo)
    {
        int iCount = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
            }
            System.out.println("\n");
        }
        return iCount;
    }



}