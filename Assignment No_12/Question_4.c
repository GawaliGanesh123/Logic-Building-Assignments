/* Write a program which accept number from user and return multiplication of all digits.

Input- 2395
Output- 270

Input- 1018
Output- 8

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int  MultDigits(int iNo)
{
	int iDigit=0;
	int iMult=1;

	if(iNo<0)
	{
	  iNo=-iNo;
	}

	while(iNo!=0)
	{
	  iDigit= iNo %10;
       if(iDigit ==0)
       {
       	iDigit =1;
       }
       iMult=iMult*iDigit;
      iNo= iNo/10;
	}
	   return iMult;

} 

int main()
{
	int iValue=0, iRet=0; 

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	iRet=MultDigits(iValue);
	
	printf("Count of Odd Digits  is:%d\n",iRet);

	return 0;
}
