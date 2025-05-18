/* 4.Write a recursive program which accept number from user and return its factorial.

Input : 5
Output : 120

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int factorial(int num)
{
    static int mult = 1;

    if (num)
    {
        factorial(num - 1);
        mult = mult * num;
    }

    return mult;
}

int main()
{
    int num;
    int result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial of %d is : %d\n", num, result);

    return 0;
}











