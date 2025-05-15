/* 4.Write a recursive program which display below pattern.

   Output : A B C D E F

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Display()
{
    static int no = 6;
    static char c = 'A';

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







