 /* 5. Write java program which accept N numbers from user and return product of all odd elements.

Input : N : 6
Elements :15 66 3 70 10 88       (15*3)
Output : 45

Input : N : 6
Elements :44 66 72 70 10 88      (No Odd Element Present)
Output : 0

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 import java.util.*;

class Ass39_5
{
    public static int Product_Of_Odd_Elements(int Brr[])
    {
        int i = 0, iProduct=1;

        for(i = 0; i < Brr.length; i++)
        {
            if(Brr[i] % 2 != 0)
            {
                iProduct = iProduct*Brr[i];
            }
        }
       
       if(iProduct > 1)
        return iProduct;
       else 
        return 0;
        
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in); 
        int i = 0, iSize = 0;
        int iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the values : ");

        for(i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");

        for(i = 0; i < iSize; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();


        iRet=Product_Of_Odd_Elements(Arr);

        System.out.println(+iRet);

    }
}



