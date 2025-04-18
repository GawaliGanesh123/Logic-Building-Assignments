/*2.Write a program which accept string from user and accept one character. Return frequency of that character.

Input : "Marvellous Multi OS"
Input : M
Output : 2

Input : "Ganesh Gawali"
Input :  a
Output: 3
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Frequency_Count(char *str, char c)
{
    int iAns=0;

    while (*str != '\0')
    {
        if (*str == c)
            iAns++;
        str++;
    }
    return iAns;
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

    result = Frequency_Count(Arr, c);

    printf("%d\t",result);

    return 0;
}
