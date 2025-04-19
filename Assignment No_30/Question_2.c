/*2.Write a program which accept character from user and check wheteher it is capital or not. (A-Z)

Input : F
Output : TRUE

Input : d
Output : FALSE

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Check_Capital(char ch)
{
    if ((ch >= 'A' && ch <= 'Z'))
        return 1;
    return 0;
}

int main()
{
    char c;
    int result;

    printf("Enter a character: ");
    scanf("%c", &c);

    result = Check_Capital(c);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
