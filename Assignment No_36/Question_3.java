/* 3. Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input : “MarvellouS”
Output : 6 (8-2)

Input : "Ganesh Gawali"
Output : 8

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Ass36_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The String : ");
        String name = sobj.nextLine();

        int i = 0, iSmall = 0, iCap=0, iAns=0;
        char ch;

        for(i = 0; i < name.length(); i++)
        {
            ch = name.charAt(i);

            if((ch >= 'a') && (ch <= 'z'))
            {
                iSmall++;
            }
        }

         for(i = 0; i < name.length(); i++)
        {
            ch = name.charAt(i);

            if((ch >= 'A') && (ch <= 'Z'))
            {
                iCap++;
            }
        }

        iAns=iSmall - iCap;

        System.out.println("difference between frequency of small characters and frequency of capital characters are : "+iAns);
    }
}





















