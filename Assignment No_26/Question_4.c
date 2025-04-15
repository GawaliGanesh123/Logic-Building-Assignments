/*4. Write a program which accept character from user and check wheteher it is special symbol or not. (!, @, #, $, %, ^, &, *).

Input : %
Output : TRUE

Input : d
Output : FALSE

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int check_symbol(char ch)
{
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
        return 1;
    return 0;
}

int main()
{
    char c;
    int result;

    printf("Enter a character: ");
    scanf("%c", &c);

    result = check_symbol(c);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
