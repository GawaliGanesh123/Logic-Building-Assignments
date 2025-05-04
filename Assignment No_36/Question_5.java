/*5. Write a java program which accept string from user and display it in reverse order.

Input : “MarvellouS”
Output : “SuollevraM”

Input : "Ganesh Gawali"
Output: "ilawaG hsenaG"

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Ass36_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The String : ");
        String name = sobj.nextLine();

        int i = 0;
        char ch;

        System.out.print("Reversed String: ");

        for(i = name.length()-1; i >=0; i--)
        {

           System.out.print(name.charAt(i));   
           
        }        
 
    }
}



