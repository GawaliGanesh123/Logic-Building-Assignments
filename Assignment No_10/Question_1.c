/* Accept Number from user and If number is less than 50 print "Small Number", if Number is Greater than 50 and less than 100 print "Medium Number" , if Number is greater than 100 then print "Large Number"

Input- 37
Output- Small Number

Input- 98                        Input- 117
Output- Medium Number            Output- Large Number

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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
