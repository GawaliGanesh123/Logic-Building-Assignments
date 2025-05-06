/* 3.Write a Java program which accept number from user and return the count of digits in between 3 and 7.

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output : 2

Input : 9922
Output : 0
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digits
 {
    private int iNo;

    public Digits(int iNo) 
    {
        this.iNo = iNo;
    }

    public int CountInBetween() 
    {
        int iDigit = 0, iCount = 0;
        int temp = iNo;

        if (temp < 0) 
        {
            temp = -temp;
        }

        while (temp > 0) 
        {
            iDigit = temp % 10;
            if ((iDigit >3) && (iDigit < 7))
            {
                iCount++;
            }
            temp = temp / 10;
        }

        return iCount;
    }
}

class Ass38_3
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits(iNo);
        int iRet = dobj.CountInBetween();

        System.out.println("Count InBetween 3 and 7 is : " + iRet);
    }
}
