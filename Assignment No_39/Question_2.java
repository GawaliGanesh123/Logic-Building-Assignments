 /* 2. Write java program which accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

Input : N : 6
        NO: 66
        Elements :85 66 3 66 93 88
Output : 1

Input : N : 6
        NO: 12
        Elements :85 11 3 15 11 111
Output : -1
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 import java.util.*;

class Ass39_2
{
    public static int Check_Index(int Brr[], int iNo)
    {
        int i = 0;
        int iResult =0;

        for(i = 0; i < Brr.length; i++)
        {
            if(Brr[i] == iNo)
            {
                iResult = i;
                break;
            }
        }

        return iResult;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in); 
        int i = 0, iSize = 0, iValue = 0;
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

        System.out.println("Enter the element that you want to search : ");
        iValue = sobj.nextInt();

        iRet = Check_Index(Arr,iValue);

        System.out.println(+iRet);
    }
}




