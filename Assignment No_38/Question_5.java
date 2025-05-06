/* 5.Write a Java program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input : 2395
Output : -15 (2 - 17)

Input : 1018
Output : 6 (8 - 2)

Input : 8440
Output : 16 (16 - 0)

Input : 5733
Output : -18 (0 - 18)
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



import java.util.*;

class Digits
 {
    private int iNo;

    public Digits(int iNo) 
    {
        this.iNo = iNo;
    }

    public int DifferenceOfDigits() 
    {
        int iDigit = 0, iEven = 0, iOdd=0;
        int temp = iNo;

        if (temp < 0) 
        {
            temp = -temp;
        }

        while (temp > 0) 
        {
            iDigit = temp % 10;
            {
                if(iDigit % 2 == 0)
                {
                    iEven=iEven+iDigit;
                }
                else
                {
                    iOdd=iOdd+iDigit;
                }
            }
            temp = temp / 10;
        }

        return iEven - iOdd;
    }
}

class Ass38_5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits(iNo);
        int iRet = dobj.DifferenceOfDigits();

        System.out.println("Difference   is : " + iRet);
    }
}


