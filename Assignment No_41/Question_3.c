/* 3. Accept Input from user and Write a recursive program which display below pattern.

Input : 5
Output : 5  4  3  2  1
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int num)
{
    static int no = 1;
    if (num)
    {
        no++;
        Display(num - 1);
        printf("%d ", --no);
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







