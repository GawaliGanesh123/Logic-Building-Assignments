/* Accept Number from user and check whether number is Prime or not.

   Input-10
   Output- Not Prime Number

   Input-5
   Output- Prime Number

*/      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt=0, iCounter=0;

	if(iNo < 0)
	{
	   -iNo;
	}

	for(iCnt=2; iCnt<=iNo/2; iCnt++)
	{
	   if((iNo % iCnt) == 0)
	   {
	      iCounter++;
	      break;
	   }
	}

	if(iCounter == 0)
	{
	  return true;
	}
	else
	{
	  return false;
	}
}

int main()
{
   int iNo=0;
   bool bAns =false;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   bAns=CheckPrime(iNo);

   if(bAns == true)
   {
   	  printf("%d is prime Number",iNo);
   }
   else
   {
   	printf("%d is not prime Number",iNo);
   }

	
	return 0;
}
