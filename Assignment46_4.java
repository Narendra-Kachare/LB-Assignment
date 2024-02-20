
/*
    5. Write java program which accept marks of N students from user 
    and display class of each student. 

    Less than 35 - Fail 
    Less than 50 - Pass class 
    Less than 60 - Second class 
    Less than 70 - First class 
    Greater than 70 - First class with Distinction 
    
    Input: 67.3 45.8 88.9 77.5 55.2 
    
    Output : 67.3 First class 
    
    45.8 Pass class 
    88.9 First class with Distinction 
    77.5 First class with Distinction 
    55.2 Second class 

*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
import java.util.*;

/////////////////////////////////////////////////
// Entry point Class
/////////////////////////////////////////////////

class Assignment46_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of Array : ");
        int iSize = sobj.nextInt();

        float Arr[] = new float[iSize];
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextFloat();
        }

        MyArray obj1 = new MyArray();
        obj1.Percentage(Arr);

    }
}
/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////

class MyArray   
{
    public void Percentage(float Arr[])
    {
        for(float Marks : Arr)
        {
            if((Marks > 0) && (Marks <= 35))
            {
                System.out.println(Marks+" : Fail");
            }

            else if((Marks > 35) && (Marks <= 50))
            {
                System.out.println(Marks+" : Pass class");
            }
            if((Marks > 50) && (Marks <= 60))
            {
                System.out.println(Marks+" : Second class");
            }
            if((Marks > 60) && (Marks <= 70))
            {
                System.out.println(Marks+" : First class");
            }
            if((Marks > 70) && (Marks <= 100))
            {
                System.out.println(Marks+" : First class with Distinction");
            }
            
        }
    }
}