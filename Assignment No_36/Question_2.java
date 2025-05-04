/* 2. Write a java program which accept string from user and count number of small characters.

Input : “Marvellous”
Output : 9

Input : "Ganesh"
Output : 5

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Ass36_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The String : ");
        String name = sobj.nextLine();

        int i = 0, iCnt = 0;
        char ch;

        for(i = 0; i < name.length(); i++)
        {
            ch = name.charAt(i);

            if((ch >= 'a') && (ch <= 'z'))
            {
                iCnt++;
            }
        }

        System.out.println("Small characters are : "+iCnt);
    }
}






