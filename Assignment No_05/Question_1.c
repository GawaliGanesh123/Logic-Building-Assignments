/* Write a program which accept number from user and print that number of $ and * on screen.

Input- 5
Output- $	*	&	*	&	*	&	*	&	*

Input- 3
Output- &	*	&	*	&	*

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>


void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
       printf("$\t");
       printf("*\t");
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

	return 0;
}
