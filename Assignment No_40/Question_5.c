/* 5.Write a recursive program which display below pattern.

   Output : a b c d e f

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    static int no = 6;
    static char c = 'a';

    if (no--)
    {   
        printf("%c  ", c++);
        Display();
    }
}

int main()
{
    Display();

    return 0;
}





