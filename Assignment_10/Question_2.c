/* Accept One Digit From User and print That Digit Value In Words.

Input-3
Output- Three

Input- 9
Output-Nine

*/ 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
	if(iNo<0) // filter
	{
		iNo=-iNo;
	}

	if(iNo==0)
		printf("Zero");
	if(iNo==1)
		printf("One");
	if(iNo==2)
		printf("Two");
	if(iNo==3)
		printf("Three");
	if(iNo==4)
		printf("Four");
	if(iNo==5)
		printf("Five");
	if(iNo==6)
		printf("Six");
	if(iNo==7)
		printf("Seven");
	if(iNo==8)
		printf("Eight");
	if(iNo==9)
		printf("Nine");
	if(iNo>9)
		printf("Invalid Number");
	
}

int main()
{
	int iValue=0;

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}
