/*2. Accept Input from usen and Write a recursive program which display below pattern.

Input : 5
Output : 1  2  3  4  5

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int num)
{
    static int no = 1;
    if (num)
    {
        printf("%d ", no++);
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





