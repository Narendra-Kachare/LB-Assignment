/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.nio.ByteBuffer;
import java.util.*;


/////////////////////////////////////////////////
// Entry point class
/////////////////////////////////////////////////

class Assignment43_4
{
    public  static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the number of elements for Arr1[]:");
        int iNo = sobj.nextInt();

        int Arr1[]=new int[iNo];
        System.out.println("Enter elements : ");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the number of elements for Arr2[]:");
        iNo = sobj.nextInt();

        int Arr2[]=new int[iNo];
        System.out.println("Enter elements : ");
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }

        MyArray obj1 = new MyArray();
        int Ret[] = obj1.CopyArray(Arr1, Arr2);
        
        // // Inbuilt Method
        // int Ret[] = new int[Arr1.length + Arr2.length];
        // System.arraycopy(Arr1, 0, Ret, 0, Arr1.length);
        // System.arraycopy(Arr2, 0, Ret, Arr1.length, Arr2.length);

        // for (int i : Ret) {
        //     System.out.println(i);
        // }
        System.out.println("Updated array will be : ");
        for(iCnt = 0; iCnt < Ret.length; iCnt++)
        {
            System.out.print(Ret[iCnt]+"\t");
        }
        System.out.println();


        sobj.close();
    }
}



/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray
{
    public int[] CopyArray(int Arr1[], int Arr2[])
    {   
        int iLength = Arr1.length + Arr2.length;
        int Res[] = new int[iLength];

        int i = 0;
        for (i = 0; i < Arr1.length; i++)
        {
            Res[i] = Arr1[i];
        }

        // second Array
        for(int j=0; j<Arr2.length; j++ )
        {
            Res[i+j] = Arr2[j];
        }
        // append Res[] array



        return Res;
    }
}

