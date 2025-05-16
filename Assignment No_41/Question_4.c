/* 4.Accept Input from user and Write a recursive program which display below pattern.

Input : 6
Output : A  B  C  D  E  F

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int num)
{
    static char c = 'A';
    if (num)
    {
        printf("%c ", c++);
        Display(num - 1);
    }
}

int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    Display(num);

    return 0;
}





