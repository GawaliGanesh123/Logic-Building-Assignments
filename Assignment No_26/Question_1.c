//1. Write a program which display ASCII table. Table contains symbol, decimal, hexadecimal and octal representation of every member from 0 to 255.



#include <stdio.h>
#define END 255

void Display_ascii_table()
{
    int start = 0;
    while (start <= END)
    {
        printf("Symbol\tDecimal\tHexadec\tOctal\n");
        printf("%c\t%d\t%x\t%o\n", start, start, start, start);
        start++;
    }
}

int main()
{
    Display_ascii_table();

    return 0;
}
