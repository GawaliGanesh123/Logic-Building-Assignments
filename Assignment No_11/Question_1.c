/* Write a Program which accept number from user and display its Digits in Reverse order.

Input- 2395
Output- 5932

Input- 1018
Output- 8101

Input- -512
Output= 215

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayReverse(int iNo)
{
	int iDigit=0;
	int iRev=0;

	if(iNo<0) //filter
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
	  iDigit= iNo %10;
	  printf("%d",iDigit);

	  iNo= iNo/10;
	  
	}

}

int main()
{
	int iValue=0; 

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	DisplayReverse(iValue);

	return 0;
}
