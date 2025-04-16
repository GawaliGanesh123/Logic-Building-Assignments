/*5.Write a program which accept string from user and display it in reverse order.

Input : "MarvellouS"
Output : "SuollevraM"

Input : "Ganesh Gawali"
Output: "ilawaG hsenaG"

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int i=0;

    for(i=strlen(str); i>=0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    
}

int main()
{
   char Arr[20];
   int iRet=0;

   printf("Enter the string:\n");
   scanf("%[^'\n']s",Arr);

   Reverse(Arr);

   return 0;
}
