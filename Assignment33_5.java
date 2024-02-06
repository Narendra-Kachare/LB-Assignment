
/*
    Write a java program which accept string from  
    user and display it in reverse order.

    Input : "MarvellouS
    Output : "SuollevraM"
*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
class Assignment33_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter name : ");
        String name = sobj.nextLine();

        StringDemo obj1 = new StringDemo();
        obj1.Reverse(name);

        sobj.close();

    }   
}



/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////

class StringDemo
{

    public void Reverse(String str)
    {
        // Convert String into Array
        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];

        int i = 0;

        // Processing on Array
        System.out.println("Reverse String is : ");
        for(int iCnt = (str.length()-1); iCnt > -1; iCnt--)
        {
            Brr[i] = Arr[iCnt];
            i++;
        }
        // convert again array to string

        System.out.println(new String(Brr));
    }


}