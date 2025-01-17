/* Write a program to find Odd Factorial of given number.

Input-8
Output-4096

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
	int iCnt=0, iAns=1;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
       if(iCnt % 2 != 0)
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

	iRet=OddFactorial(iValue);

	printf("Odd Factorial of Number:%d",iRet);

	return 0;
}
