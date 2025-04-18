/*4.Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

Input : "Marvellous Multi OS"
Input : M
Output : 11

Input : "Marvellous Multi OS"
Input : W
Output : -1

Input : "Ganesh Gawali"
Input : a
Output : 10
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Last_occ(char *str, char c)
{
    int counter = 0;
    int ret_counter = -1;

    while (*str != '\0')
    {
        if (*str == c)
            ret_counter = counter;
        str++;
        counter++;
    }

    return ret_counter;
}

int main()
{
    char c;
    int result;
    char str[30];

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    // scanf("%[^'\n']s", str);

    printf("Enter character : ");
    scanf("%c", &c);

    result = Last_occ(str, c);

    if (result != -1)
        printf("'%c' last occurred at index %d\n", c, result);
    else
        printf("'%c' not found\n", c);

    return 0;
}
