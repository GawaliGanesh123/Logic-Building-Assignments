/* Write a Program which Accept number from user and return difference between summation of Even Digits and Summation of Odd Digits.

Input- 2395
Output- -15  (2  17)

Input-  1018
Output- 6    (8-2)

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int  CountDiffernce(int iNo)
{
	int iDigit=0;
	int iSum=0;
	int iOdd=0;

	if(iNo<0)
	{
	  iNo=-iNo;
	}

	while(iNo!=0)
	{
	  iDigit= iNo %10;
       if(iDigit % 2 == 0)
       {
       	 iSum= iSum+iDigit;
       }
       else
       {
       	iOdd= iOdd+iDigit;
       }

       iNo= iNo/10;

     }  
         
	   return iSum-iOdd;

}
 
int main()
{
	int iValue=0, iRet=0; 

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	iRet=CountDiffernce(iValue);
	
	printf("Count of Odd Digits  is:%d\n",iRet);

	return 0;
}
