/* Write a program which accept number from user and count frequency of such a  digits which are less than 6.

Input- 2395
Output- 3

Input- 9875
Output- 1

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int  Count(int iNo)
{
	int iDigit=0;
	int iFrequency=0;


	if(iNo<0)
	{
	  iNo=-iNo;
	}

	while(iNo!=0)
	{
	  iDigit= iNo %10;

	  if(iDigit<6)
	  {
	  	iFrequency++;
	  }
	       
         iNo= iNo/10;
	}
	   return iFrequency;

}

int main()
{
	int iValue=0, iRet=0; 

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	iRet=Count(iValue);
	
	printf("Digits is less than 6 is:%d\n",iRet);

	return 0;
}
