/* Write a program which accept number from user and return difference between summation of all its factors and non factors.

Input: 12
Output: -34  (16-50)

Input : 10
Output:-29   (8-37)

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt=0;
	int iSum=0;
  int iDiff=0;

	for(iCnt=1; iCnt<iNo; iCnt++)
	{
	  if(iNo % iCnt == 0)
	  {
	    iSum= iSum+iCnt;
	  }
	  else
	  {
	    iDiff= iDiff+iCnt;
	  }
	}
	  return iSum-iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("Difference is:%d\n",iRet);

	return 0;
}
