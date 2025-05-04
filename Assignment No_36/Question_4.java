/* 4. Write a java program which accept string from user and check whether it contains vowels in it or not.

Input : “marvellous”
Output : TRUE

Input : “Demo”
Output : TRUE

Input : “xyz”
Output : FALSE
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Ass36_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The String : ");
        String name = sobj.nextLine();

        int i = 0, iAns=0;
        char ch;

        for(i = 0; i < name.length(); i++)
        {
            ch = name.charAt(i);

            if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
            {
                iAns++;
                break;
            } 
        }        

        if(iAns > 0)
        {
            System.out.println("TRUE");
        }
        else 
         {
            System.out.println("FALSE");
         }   

    }
}
