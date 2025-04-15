/* 3.Write a program which accept character from user. If character is capital then display all the characters from the input characters till 'Z'. 
If input character is small then print all the characters in reverse order till 'a'. In order cases return directly.

Input : Q
Output : Q   R   S   T   U   V   W   X   Y   Z

Input : m
Output : m   l   k   j   h   g   f   e   d   c   b   a

Input : 8
Output :8

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
            printf("%c   ", ch++);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
            printf("%c   ", ch--);
    }
    else
        printf("%c\n", ch);
}

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    Display(c);

    return 0;
}
