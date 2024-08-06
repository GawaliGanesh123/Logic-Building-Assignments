// Accept one number from user and print that number of * on Screen using while loop.

#include<stdio.h>

void Accept(int iNo)
{
	int iCnt=0;

	while(iCnt<iNo)
	{
		printf("*");

        iCnt++;
	}

}
int main()
{
	int iValue=0;

	printf("Enter the number:\n");
	scanf("%d",&iValue);

	Accept(iValue);
	return 0;
}