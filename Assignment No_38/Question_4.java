/* 4.Write a Java program which accept number from user and return multiplication of all digits.

Input : 2395
Output : 270

Input : 1018
Output : 0


Input : 922432
Output : 864
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

    public int MulitplicationOfDigits() 
    {
        int iDigit = 0, iMult = 1;
        int temp = iNo;

        if (temp < 0) 
        {
            temp = -temp;
        }

        while (temp > 0) 
        {
            iDigit = temp % 10;
            iMult=iMult*iDigit;
            temp = temp / 10;
        }

        return iMult;
    }
}

class Ass38_4
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits(iNo);
        int iRet = dobj.MulitplicationOfDigits();

        System.out.println("Multiplication of all Digits  is : " + iRet);
    }
}
