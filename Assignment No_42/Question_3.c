/* 3.Write a recursive program which accept string from user and count number of characters.

Input : "Hello"
Output : 5

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int strlenX(char *str)
{
    static int length = 0;

    if (*str)
    {
        length++;
        strlenX(str + 1);
    }

    return length;
}

int main()
{
    int result;
    char str[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", str);

    result = strlenX(str);

    printf("Length of the string is : %d\n", result);

    return 0;
}







