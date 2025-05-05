/* 2. Write Java program which accept N numbers from user and display all such elements which are divisible by 5.

Input : N : 6
       Elements :85 66 3 80 93 88
Output : 85 80

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    public void Check_Divisible_By_Five()
    {
        int  i = 0;
        int iAns = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
           if(Arr[i] % 5 == 0)
           {
             System.out.println(+Arr[i]);
           }
            
        }

    }
}

class Ass37_2
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

        aobj.Check_Divisible_By_Five();

    }
}

















