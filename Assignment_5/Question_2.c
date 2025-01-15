/* Write a program which accept number from user and display its Factors in Decreasing Order.

Input- 12
Output- 6 4 3 2 1

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>


void FactRev(int iNo)
{
  int iCnt=0;
  int iRev=0;
  
  for(iCnt=iNo-1; iCnt<iNo; iCnt--)
  {
    if(iNo % iCnt ==0)
    {
         printf("%d\t",iCnt);
    }
  }
   
}

int main()
{
	 int iValue=0;
	 int iRet=0;

	printf("Enter the Number:\n");
	scanf("%d",&iValue);
     
    FactRev(iValue);
     
	return 0;
}
