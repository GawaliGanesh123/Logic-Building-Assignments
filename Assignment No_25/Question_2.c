/*2. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4

Output : * * * #
	 * * # @
	 * # @ @
	 # @ @ @
			
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void DisplayPattern(int iRow, int iCol)
{
	int i=0,j=0;

	for(i=1; i<=iRow; i++)
	{
	   for(j=1; j<=iCol; j++)
	   {
	      if(j==(iRow+1)-i)
	      	printf("#\t");
	      else if(j<=5-i)
	      	printf("*\t");
	      else
	      	printf("@\t");
	   }
	   printf("\n");
	}
}


int main()
{
   int iValue1=0, iValue2=0;

   printf("Enter a Number of Rows:");
   scanf("%d",&iValue1);

   printf("Enter a Number of Columns:");
   scanf("%d",&iValue2);

   DisplayPattern(iValue1, iValue2);


	return 0;

}
