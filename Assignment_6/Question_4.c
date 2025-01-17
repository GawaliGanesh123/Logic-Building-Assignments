/* Write a program to find Even Factorial of given number.

Input-5
Output-25   

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
	int iCnt=0, iAns=1;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
       if(iCnt % 2 == 0)
       {
       	  iAns=iAns*iNo;
       }
	}

     return iAns;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter a Number:\n");
	scanf("%d",&iValue);

	iRet=EvenFactorial(iValue);

	printf("Even Factorial of Number:%d",iRet);

	return 0;
}
