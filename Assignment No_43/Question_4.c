/* 4. Write a recursive program accept number from user and return Smallest digit.

Input : 87983
Output : 3

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

int find_min(int num)
{
    int digit;
    static int min = 9;

    if (num)
    {
        digit = num % 10;

        if (digit < min)
            min = digit;
        find_min(num / 10);
    }
    return min;
}

int main()
{
    int num;
    int result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = find_min(num);

    printf("Smallest digit is : %d\n", result);

    return 0;
}




