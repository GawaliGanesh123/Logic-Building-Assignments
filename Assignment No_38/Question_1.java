/* 1.Write a java program which accept number from user and return the count of even digits.

Input : 2395
Output : 1

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 4
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digits
 {
    private int iNo;

    public Digits(int iNo) 
    {
        this.iNo = iNo;
    }

    public int CountOfEvenDigits() 
    {
        int iDigit = 0, iEven = 0;
        int temp = iNo;

        if (temp < 0) 
        {
            temp = -temp;
        }

        while (temp > 0) 
        {
            iDigit = temp % 10;
            if (iDigit % 2 == 0)
            {
                iEven++;
            }
            temp = temp / 10;
        }

        return iEven;
    }
}

class Ass38_1 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits(iNo);
        int iRet = dobj.CountOfEvenDigits();

        System.out.println("Count of Even Digits is: " + iRet);
    }
}




