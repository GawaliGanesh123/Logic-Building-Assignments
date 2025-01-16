/* Write a program which accept Number from user and print all odd number up to N.

Input-  18
Output- 1	3	5	7	9	11	13	15	17

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayOdd(int iNo)
{
	int iCnt=0;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
	   if(iCnt % 2 != 0)
	   {
	     printf("%d\t", iCnt);
	   }
	}
}

int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

	return 0;
}
