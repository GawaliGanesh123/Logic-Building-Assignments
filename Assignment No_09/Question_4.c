/* Write a program which accept Range from user and return adition of all even numbers between that range.(range should contain postive number only)

input=23 30
ouput=108

input=-10 2
output=invalid range

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int RangeEvenSum(int iNo1,int iNo2)
{
	int iCnt=0;
	int iResult=0;

	if(iNo1>iNo2)
	{
		printf("INVALID RANGE\n");
	}

	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
	   if(iCnt % 2==0)
		{
			iResult=iResult+iCnt;
		}

    }
	return iResult;
}


int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;

	printf("Enter a first number:");
	scanf("%d",&iValue1);

	printf("Enter a second number number:");
	scanf("%d",&iValue2);

	iRet=RangeEvenSum(iValue1,iValue2);

	 printf("ADDITION IS %d",iRet);


	 return 0;
}
