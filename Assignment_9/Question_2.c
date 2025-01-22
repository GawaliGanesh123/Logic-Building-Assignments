/* Write a prgram which accept range frrom user and display all even numbers in between range.

input:23 35
ouput=24 26 28 30 32 34

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeEvenDisplay(int iNo1,int iNo2)
{

	int iCnt=0;

	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d\t",iCnt);
		}

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

    RangeEvenDisplay(iValue1,iValue2);

    return 0;

}
