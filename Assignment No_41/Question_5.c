/* 5. Accept Input from user and Write a recursive program which display below pattern.

Input : 6
Output : a  b  c  d  e  f

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int num)
{
    static char c = 'a';
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



