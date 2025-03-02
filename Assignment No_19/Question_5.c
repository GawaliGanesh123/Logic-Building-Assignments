/*5. Write a program which accepts Number from user and Display below pattern.

Input : 8
Output :2  4  6  8  10  12  14  16

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt=0;

	for(iCnt=1; iCnt<=iNo*2; iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			printf("%d\t",iCnt);
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
