/*3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input : "Marvellous Multi OS"
Input : M
Output : 0

Input : "Marvellous Multi OS"
Input : W
Output : -1

Input : "Ganesh Gawali"
Input : e
Output : 3
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int First_Occurrence(char *str, char c)
{
    int counter = 0;

    while (*str != '\0')
    {
        if (*str == c)
            return counter;
        str++;
        counter++;
    }
    return -1;
}

int main()
{
    char c;
    int result;
    char Arr[30];

    printf("Enter string : ");
    fgets(Arr, sizeof(Arr), stdin);
    // scanf("%[^'\n']s", str);

    printf("Enter character : ");
    scanf("%c", &c);

    result = First_Occurrence(Arr, c);

    if (result != -1)
        printf("'%c' first occurred at index %d\n", c, result);
    else
        printf("'%c' not found\n", c);

    return 0;
}
