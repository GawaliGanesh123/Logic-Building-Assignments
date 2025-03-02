/*4.Write a program which accepts Number from user and Display below pattern.

Input : 4
Output :#  1  *  #  2  *  #  3  *  #  4  *

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt=0;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("#\t");
		printf("%d\t",iCnt);
		printf("*\t");
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
