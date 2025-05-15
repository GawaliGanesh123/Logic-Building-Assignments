/* 3.Write a recursive program which display below pattern.

   Output : 5 4 3 2 1

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    static int no = 0;

    if (no < 5)
    {
        no++;
        Display();
        printf("%d  ", no--);
    }
}

int main()
{
    Display();

    return 0;
}







