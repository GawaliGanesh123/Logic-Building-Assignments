/* Write a program which accept Number from user and Display its Table in Reverse Order.

Input-5
Output- 50	45	40	35	30	25	20	15	10	5

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ReverseTable(int iNo)
{
	int iCnt=0;

	for(iCnt=10; iCnt>=1; iCnt--)
	{
		printf("%d\t",iNo*iCnt);
	}
}

int main()
{
	int iValue=0;

	printf("Enter a Number:\n");
	scanf("%d",&iValue);

    ReverseTable(iValue);

	return 0;
}
