/*3.Write a program which accepts Number from user and Display below pattern.

Input : 5
Output :5  #  4  #  3  #  2  #  1  #

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt=0;

	for(iCnt=iNo; iCnt>=1; iCnt--)
	{
		printf("%d\t",iCnt);
		printf("#\t");
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
