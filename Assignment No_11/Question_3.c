/* Write a Program which Accept Number from user and Count frequency of 2 in it.

Input- 2325
Output- 2

Input- 1018
Output- 0

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int  CountTwo(int iNo)
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

	  if(iDigit==2)
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

	iRet=CountTwo(iValue);
	
	printf("Count of 2 is:%d\n",iRet);

	return 0;
}

