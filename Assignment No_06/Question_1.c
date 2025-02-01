/* Write a program to find Factorial of Given Number.

Input-5
Output-120   

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Factorial(int iNo)
{
	int iCnt=0, iAns=1;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
       iAns=iAns*iCnt;
	}

	return iAns;
}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial is:%d",iRet);

	return 0;
}
