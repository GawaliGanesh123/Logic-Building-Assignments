/*Write a program to print greater between two numbers. Print one number if both are the same.

Input- 12 17
Ouput- 17

Input- 14 14
Output- 14

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void GreaterNum(int iNo1, int iNo2)
{
	if(iNo1 == iNo2)
	{
		printf("%d :Both  are equal",iNo1);
	}
	else if(iNo1 >iNo2)
	{
		printf("Greater Number is:%d",iNo1);
	}
	else
	{
		printf("Greater Number is:%d",iNo2);
	}
}


int main()
{
    int iValue1=0, iValue2=0;

   printf("Enter first Number:\n");
   scanf("%d",&iValue1);

   printf("Enter second Number:\n");
   scanf("%d",&iValue2);

   GreaterNum(iValue1, iValue2);


	return 0;
}
