/*1.Write a program which accepts Number from user and Display below pattern.

Input : 5
Output :* * * * * # # # # #

Input:3
Output: * * * # # #


*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt=0;

	for(iCnt=1; iCnt<=iNo*2; iCnt++)
	{
		if(iCnt<=5)
		{
		  printf("*\t");	
		}
		else
		{
	      printf("#\t");
		}
		
	}

}

int main()
{
	int iValue=0;

    printf("Enter Number\t");
    scanf("%d",&iValue);

    DisplayPattern(iValue);


	return 0;
}
