/* Write a program which accept number from user and return the count of Odd Digits.

Input- 2395
Output- 3

Input- 1038
Output- 2

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int  CountOdd(int iNo)
{
	int iDigit=0;
	int iOdd=0;


	if(iNo<0)
	{
	  iNo=-iNo;
	}

	while(iNo!=0)
	{
	  iDigit= iNo %10;

	  if(iDigit % 2 != 0)
	  {
	  	iOdd++;
	  }
	       
         iNo= iNo/10;
	}
	   return iOdd;

}

int main()
{
	int iValue=0, iRet=0; 

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	iRet=CountOdd(iValue);
	
	printf("Count of Odd Digits  is:%d\n",iRet);

	return 0;
}
