/* 2. Write a recursive program accept number from user and return largest digit.

Input : 87983
Output : 9

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int find_max(int num)
{
    int digit;
    static int max = 0;

    if (num)
    {
        digit = num % 10;

        if (digit > max)
            max = digit;
        find_max(num / 10);
    }
    return max;
}

int main()
{
    int num;
    int result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = find_max(num);

    printf("Largest digit is : %d\n", result);

    return 0;
}





