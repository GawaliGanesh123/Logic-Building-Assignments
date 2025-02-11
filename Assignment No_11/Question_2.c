/* Write a program which accept number from user and check whether it contains 0 in it or not.

Input- 2395
Output- There is no Zero

Input- 1018
Output- It contains Zero.

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChKZero(int iNo)
{
	int iDigit=0, iAns=0;
	int iRev=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
	  iDigit= iNo %10;

	  if(iDigit==0)
	  {
	  	iAns++;
	  }
	    
        iNo= iNo/10;
	}

	if(iAns >0)
		return 1;
	else
		return 0;

}

int main()
{
	int iValue=0;
	bool bRet=false; 

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	bRet=ChKZero(iValue);

	if(bRet==1)
	{
		printf("It Contains Zero\n");
	}
	else
	{
		printf("There is No Zero\n");
	}

	return 0;
}
