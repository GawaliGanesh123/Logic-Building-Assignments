/*5.Write a program which accept string from user and copy that characters of string into another string by toggling the case.

Input : "Marvellous Python 2"
Output : "mARVELLOUS pYTHON 2"
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

char strcpytoggle(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
            *dest = *src + 32;
        else if (*src >= 'a' && *src <= 'z')
            *dest = *src - 32;
        else
            *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

}

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter string : ");
    scanf("%[^'\n']s", str1);

    strcpytoggle(str1, str2);

    printf("Toggled copied string is : %s\n", str2);

    return 0;
}
