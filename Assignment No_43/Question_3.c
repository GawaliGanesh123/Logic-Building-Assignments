/* 3. Write a recursive program accept string from user and count number of small characters.

Input : HElloWOrlD
Output : 5

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

int Count_Small(char *str)
{
    static int count = 0;

    if (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            count++;
        Count_Small(str + 1);
    }

    return count;
}

int main()
{
    int result;
    char str[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", str);

    result = Count_Small(str);

    printf("Count of small characters is : %d\n", result);

    return 0;
}




