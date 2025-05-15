/* 1.Write a recursive program which display below pattern.

    Output : *  *  *  *  *

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

void Display()
{
    static int no = 5;

    if (no)
    {   
        no--;
        printf("*  ");
        Display();
    }
}

int main()
{
    Display();

    return 0;
}







