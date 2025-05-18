/* 5. Write a recursive program which accept number from user and return its product of digits.

Input : 523
Output : 30

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int multiplication_of_digits(int num)
{
    static int mult = 1;

    if (num)
    {
        mult = mult * (num % 10);
        multiplication_of_digits(num / 10);
    }
    return mult;
}

int main()
{
    int num;
    int result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = multiplication_of_digits(num);

    printf("Multiplication of digits is : %d\n", result);

    return 0;
}





