/* Write a program which accept Number from user and Display its Table.

Input- 2
Output- 2	4	6	8	10	12	14	16	18	20

Output- 5
Output- 5	10	15	20	25	30	35	40	45	50

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableOfNumber(int iNo)
{
   int iCnt=0;

   for(iCnt=1; iCnt<=10; iCnt++)
   {
      printf("%d\t",iNo*iCnt);
   }
}

int main()
{
   int iValue=0;

   printf("Enter The Number:\n");
   scanf("%d",&iValue);

   TableOfNumber(iValue);

   return 0;
}
