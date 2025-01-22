/* Write a program which aacept range  from user and display all numbers in between that range.

Input:23 35
Ouput:23 24 25 26 27 28 29 30 31 32 33 34 35 

Input-13 9
Output- INVALID RANGE

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void RangeDisplay(int iNo1,int iRange)
{
    int iCnt=0;

	 if(iNo1<=iRange)
		{
			for(iCnt=iNo1;iCnt<=iRange;iCnt++)
			{
				printf("%d\t",iCnt);
			}
			
		}
		else
		{
			printf("INVALID RANGE");
		}
}


int main()
{

	int iValue1=0;
	int iRange=0;

	printf("Enter a  number:");
	scanf("%d",&iValue1);

	printf("Enter a Range:");
	scanf("%d",&iRange);

	RangeDisplay(iValue1,iRange);

	return 0;
}
