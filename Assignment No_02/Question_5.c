/* Accept number from user and check whether number is even or odd.

Input- 26
Output- 26 Number is Even

Input- 33
Output- 33 Number is Odd.


*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
	int iCnt=0;

	if(iNo % 2 == 0)
	{
	   return 1;
	}
	else
	{
          return 0;
	}
}

int main()
{
	int iValue=0;
	bool bRet=0;

	printf("Enter the value:\n");
	scanf("%d",&iValue);

	bRet=ChkEven(iValue);

	if(bRet== 1)
	{
	  printf("\n%d Number is Even",iValue);
	}
	else
	{
	  printf("\n%d Number is Odd",iValue);
	}

	return 0;
}
