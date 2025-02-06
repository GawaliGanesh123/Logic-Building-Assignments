/* Write a program which aacept range from user and display all numbers in between that range in reverse  order

input:23 35
ouput: 35 34 33 32 31 30 29 28 27 26 25 23

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iNo1,int iNo2)
{
    int  iCnt=0;

	if(iNo1<=iNo2)
	{
		for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
		{
			printf("%d\t",iCnt);
		}
	}
	else
	{
		printf("INVALID NUMBER");
	}
			
}


int main()
{
	int iValue1=0;
	int iValue2=0;

	printf("Enter a first number:");
	scanf("%d",&iValue1);

	printf("Enter a second number:");
	scanf("%d",&iValue2);

	RangeDisplay(iValue1,iValue2);

	return 0;
}
