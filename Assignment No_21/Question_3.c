/*3. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 4

Output : A  A  A  A
         B  B  B  B
         C  C  C  C
         
         
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0; 
	int j=0;
	char ch='A';

	for(i=1; i<=iRow; i++)
	{
		  
       for(j=1; j<=iCol; j++)
       {
          printf("%c\t",ch);
       }
        printf("\n");
        ch++;
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
