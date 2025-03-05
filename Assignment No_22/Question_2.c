/*2. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4

Output : 2 4 6 8 10
		 1 3 5 7 9
	  	 2 4 6 8 10
		 1 3 5 7 9
         
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0; 
	int j=0, iNum=0;

	for(i=0; i<iRow; i++)
	{ 

      if(i%2 == 0)
		   iNum=2;
	    else
		   iNum=1;

       for(j=0; j<iCol; j++,iNum+=2)
       {
         printf("%d\t",iNum);
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
