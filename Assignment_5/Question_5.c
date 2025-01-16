/* Write a program which accept Number from user and print first 5 multiple of Number.

Input- 4
Output- 4	8	12	16	20

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void MultipleOfNumber(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=5; iCnt++)
    {
        printf("%d\t",iNo*iCnt); 
    }
}

int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    MultipleOfNumber(iValue);

	return 0;
}
