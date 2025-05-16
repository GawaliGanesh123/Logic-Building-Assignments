/* 1.Accept Input From user and Write a recursive program which display below pattern.

Input : 5
Output : *  *  *  *  *

*/
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int num)
{
    if (num)
    {
        printf("* ");
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









