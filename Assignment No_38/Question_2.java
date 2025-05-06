/* 2.Write a Java program which accept number from user and return the count of odd digits.

Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digits
 {
    private int iNo;

    public Digits(int iNo) 
    {
        this.iNo = iNo;
    }

    public int CountOfOddDigits() 
    {
        int iDigit = 0, iOdd = 0;
        int temp = iNo;

        if (temp < 0) 
        {
            temp = -temp;
        }

        while (temp > 0) 
        {
            iDigit = temp % 10;
            if (iDigit % 2 != 0)
            {
                iOdd++;
            }
            temp = temp / 10;
        }

        return iOdd;
    }
}

class Ass38_2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits(iNo);
        int iRet = dobj.CountOfOddDigits();

        System.out.println("Count of Odd Digits is: " + iRet);
    }
}
