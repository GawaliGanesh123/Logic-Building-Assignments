//Accept One Number from user and check Given Number is Odd or Even.

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
