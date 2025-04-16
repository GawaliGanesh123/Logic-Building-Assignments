/*4. Write a program which accept string from user and check whether it contains vowels in it or not.

Input : "marvellous"
Output : TRUE

Input : "Demo"
Output : TRUE

Input : "xyz"
Output : FALSE
 

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Check_vowels(char *str)
{
    while (*str != '\0')
    {
        if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
            return 1;
        str++;
    }
    return 0;
}


int main()
{
   char Arr[20];
   int iRet=0;

   printf("Enter the string:\n");
   scanf("%[^'\n']s",Arr);

   iRet=Check_vowels(Arr);

   if (iRet == 1)
        printf("TRUE\n");
   else
        printf("FALSE\n");

   return 0;
}
