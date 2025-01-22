/* Write a program which accept range from user and return addition of all numbers in between that Range.

input=23 30
output=212

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int RangeSumAll(int iNo1,int iNo2)
{
	int iCnt=0;
	int iResult=0;

	if(iNo1>iNo2)
	{
		printf("INVALID RANGE ");
	}
	
	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{

		iResult=iResult+iCnt;
	}

	return iResult;

}


int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;

	printf("Enter a first number\n:");
	scanf("%d",&iValue1);

	printf("Enter a second number\n:");
	scanf("%d",&iValue2);

	iRet=RangeSumAll(iValue1,iValue2);

	 printf("ADDITION IS %d",iRet);

	 return 0;
}
