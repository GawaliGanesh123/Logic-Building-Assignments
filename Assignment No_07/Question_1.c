/* Write a Program Which Return difference between even and odd factorial of given number.

Input- 8
Output-279   Even Factorial:384
             Odd Factorial :105
             Even - Odd = 279

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
	int iCnt=0;
	int iEven=1;
	int iOdd=1;
	int iAns=0;

	if(iNo<0) // Filter
	{
		iNo=-iNo;
	}

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
    	if(iCnt % 2 == 0)
    	{
    		iEven= iEven*iCnt;
    	}
    	else
    	{
    		iOdd= iOdd*iCnt;
    	}
    }
      iAns= iEven-iOdd;

      return iAns;
	
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Factorial Difference is%d\n",iRet);

	return 0;
}
