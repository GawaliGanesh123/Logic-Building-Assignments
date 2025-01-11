/* Accept one number from user and print that number of * on Screen using while loop.

Input - 7
Output- * * * * * * *

*/

#include<stdio.h>

void StarPrint(int iNo)
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

	StarPrint(iValue);
	return 0;
}
