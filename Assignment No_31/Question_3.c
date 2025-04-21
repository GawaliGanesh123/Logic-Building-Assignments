/*3.Write a program which accept string from user and copy the small characters of that string into another string.

Input : "Marvellous Multi OS"
Output : "arvellousulti"

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

char strcpysmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')
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

    strcpysmall(str1, str2);

    printf("Copied string is : %s\n", str2);

    return 0;
}
