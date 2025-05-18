/* 2.Write a recursive program which accept number from user and return summation of its digits.

Input : 879
Output : 24

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

int Sum_Of_Digits(int num)
{
    static int sum = 0;

    if (num)
    {
        sum = sum + (num % 10);
        Sum_Of_Digits(num / 10);
    }
    return sum;
}

int main()
{
    int num;
    int result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = Sum_Of_Digits(num);

    printf("Summation of digits is : %d\n", result);

    return 0;
}






