/*5.Write a program which accepts N from user and print First 5 multiple of N.

Input : 5
Output :5 10 15 20 25


*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int iCnt=0;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("%d\t",iCnt*iNo);
	}

}

int main()
{
	int iValue=0;

    printf("Enter Number\t");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);


	return 0;
}
