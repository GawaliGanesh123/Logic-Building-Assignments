/* Write a program which accept number from user and print Odd factors of that number.

Input: 36
Output: 3 9 

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void DisplayOddFactor(int iNo)
{
	int iCnt=0;

	if(iNo<=0)
	{
		iNo = -iNo;
	}
     
     for(iCnt=1; iCnt<=iNo; iCnt++)
     {
     	if(iNo % iCnt ==0)
     	{
     		if(iCnt % 2 != 0)
     		{
     			printf("%d\t",iCnt);
     		}
     		
     	}
     }
}

int main()
{
	int iValue=0;
	

	printf("Enter the value:\n");
	scanf("%d",&iValue);
     
     DisplayOddFactor(iValue);


	return 0;
}
  
