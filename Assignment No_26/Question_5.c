/* 5. Write a program which accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

Input : A
Output :Decimal 65
        Octal   0101
        Hexadecimal 0X41

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal %d\nOctal   %o\nHexadecimal %x\n", ch, ch, ch);
}

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    Display(c);

    return 0;
}
