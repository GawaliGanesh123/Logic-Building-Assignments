/* 1. Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input : N : 6
        Elements :85 66 3 80 93 88
Output : 53 (234 - 181)

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int no)
    {
        Arr = new int[no];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are : ");
        int i = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public int Difference_of_Summation()
    {
        int iEven = 0, iOdd=0, i = 0;
        int iAns = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
           if(Arr[i] % 2 == 0)
           {
             iEven = iEven + Arr[i];
           }
            
        }

        for(i = 0 ; i < Arr.length; i++)
        {
           if(Arr[i] % 2 != 0)
           {
             iOdd = iOdd + Arr[i];
           }
            
        }
      
        return iEven-iOdd;
    }
}

class Ass37_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements you want to store : ");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        System.out.println("Array size is : "+aobj.Arr.length);

        aobj.Accept();

        aobj.Display();

        int  iRet = aobj.Difference_of_Summation();

        System.out.println("Difference  is : "+iRet);
    }
}






