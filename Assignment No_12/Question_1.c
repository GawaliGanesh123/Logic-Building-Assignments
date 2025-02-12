/* Write a program which Accept number from user and return Count of Even Digits.

Input- 2395
Output- 1

Input- 1018
Output- 2

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int  CountEven(int iNo)
{
	int iDigit=0;
	int iEven=0;


	if(iNo<0)
	{
	  iNo=-iNo;
	}

	while(iNo!=0)
	{
	  iDigit= iNo %10;

	  if(iDigit % 2 == 0)
	  {
	  	iEven++;
	  }
	       
         iNo= iNo/10;
	}
	   return iEven;

}

int main()
{
	int iValue=0, iRet=0; 

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	iRet=CountEven(iValue);
	
	printf("Count of Even Digits  is:%d\n",iRet);

	return 0;
}
