/*4.Write a program which accept string from user and copy that characters of string into another string by removing all white spaces.

Input : "Marvel lous Pyth on"
Output : "MarvellousPython"

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

char RemoveWhiteSpace(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter string : ");
    scanf("%[^'\n']s", str1);

    RemoveWhiteSpace(str1, str2);

    printf("Copied string is : %s\n", str2);

    return 0;
}
