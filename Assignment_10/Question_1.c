#include<stdio.h>

vod Number(int iNo)
{
	if(iNo<50)
	{
		printf("Small Number\n");
	}
	else if(iNo>50 && iNo<100)
	{
		printf("Medium Number\n");
	}
	if(iNo>100)
	{
		printf("Large Number\n");
	}
	
}


int main()
{
	int iValue=0;

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	Number(iValue);

	return 0;
}
