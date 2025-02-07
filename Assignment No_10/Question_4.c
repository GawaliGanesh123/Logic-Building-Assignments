/* Write a program to swap values of two int variables. 

Input- No1=10, No2=20
Output- No1=20, No2=10

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Swap(int iNo1, int iNo2)
{
	int iTemp=0;

	iTemp=iNo1;
	iNo1=iNo2;
	iNo2=iTemp;

	printf("After Swapping:iNo1-%d & iNo2-%d",iNo1, iNo2);
}

int main()
{
    int iValue1=0, iValue2=0;

   printf("Enter first Number:\n");
   scanf("%d",&iValue1);

   printf("Enter second Number:\n");
   scanf("%d",&iValue2);

   Swap(iValue1, iValue2);


	return 0;
}
