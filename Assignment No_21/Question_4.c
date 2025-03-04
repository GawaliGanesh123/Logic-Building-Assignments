/*4. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4

Output : 4  4  4  4
         3  3  3  3
         2  2  2  2
         1  1  1  1

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0; 
	int j=0;

	for(i=iRow; i>=1; i--)
	{  
       for(j=1; j<=iCol; j++)
       {
          printf("%d\t",i);
       }
        printf("\n");
	}

}


int main()
{
	int iValue1=0; 
	int iValue2=0;

	printf("Enter number of rows:\n");
	scanf("%d",&iValue1);

	printf("Enter the number of columns:\n");
	scanf("%d",&iValue2);

	DisplayPattern(iValue1, iValue2);

	return 0;
}
