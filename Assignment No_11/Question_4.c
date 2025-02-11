/* Write a program which Accept Number from user and Count frequency of 4 in it.

Input- 2905
Output- 0

Input- 9440
Output- 2

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int  CountFour(int iNo)
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

	  if(iDigit==4)
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

	iRet=CountFour(iValue);
	
	printf("Count of 4 is:%d\n",iRet);

	return 0;
}
