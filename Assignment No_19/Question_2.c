/*2.Write a program which accepts Number from user and Display below pattern.

Input : 5
Output : A  B  C  D  E

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int iCnt=0;
	char ch='A';

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("%c\t",ch);
		ch++;
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
