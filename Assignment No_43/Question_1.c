/* 1. Write a recursive program accept string from user and count white spaces.

Input : HE llo WOr lD
Output : 3

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int Count_White_Spaces(char *str)
{
    static int count = 0;

    if (*str)
    {
        if (*str == ' ')
            count++;
        Count_White_Spaces(str + 1);
    }

    return count;
}

int main()
{
    int result;
    char str[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", str);

    result = Count_White_Spaces(str);

    printf("Count of white spaces is : %d\n", result);

    return 0;
}





