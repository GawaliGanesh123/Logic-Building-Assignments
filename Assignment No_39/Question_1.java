 /* 1. Write java program which accept N numbers from user and accept one another number as NO , check whether NO is present or not.

Input : N : 6
        NO: 66
        Elements :85 66 3 66 93 88
Output : TRUE

Input : N : 6
        NO: 12
        Elements :85 11 3 15 11 111
Output : FALSE

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 import java.util.*;

class Ass39_1
{
    public static boolean Search_Element(int Brr[], int iNo)
    {
        int i = 0;
        boolean bResult = false;

        for(i = 0; i < Brr.length; i++)
        {
            if(Brr[i] == iNo)
            {
                bResult = true;
                break;
            }
        }

        return bResult;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in); 
        int i = 0, iSize = 0, iValue = 0;
        boolean bRet = false;

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

        System.out.println("Enter the element that you want to search : ");
        iValue = sobj.nextInt();

        bRet = Search_Element(Arr,iValue);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}



