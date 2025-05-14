 /* 4. Write java program which accept N numbers from user and accept Range, Display all elements from that range

Input : N : 6
        Start: 60
        End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88

Input : N : 6
        Start: 30
        End : 50
Elements :85 66 3 76 93 88
Output :

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 import java.util.*;

class Ass39_4
{
    public static void Display_Range(int Brr[], int iStart, int iEnd)
    {
        int i = 0;

        for(i = 0; i < Brr.length; i++)
        {
            if((Brr[i] > iStart) && (Brr[i] < iEnd))
            {
                System.out.println(+Brr[i]);
            }
        }

        
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in); 
        int i = 0, iSize = 0, iStart = 0, iEnd=0;
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

        System.out.println("Enter the Starting Point : ");
        iStart = sobj.nextInt();

        System.out.println("Enter the Ending Point: ");
        iEnd = sobj.nextInt();

        Display_Range(Arr,iStart, iEnd);

    }
}





