/*Accept One Number from user and check number is palindrome number or not.

Input- 121
Output- Given number is Palindrome Number

Input- 123
Output- Given number is Not Palindrome Number
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CheckPalindrome(int iNo)
{
	int iAns=0, iTemp=iNo,iDigit=0;

	while(iNo != 0)
	{
	    iDigit=iNo%10;

	    iAns=iAns*10+iDigit;

	    iNo=iNo/10;
	}

	if(iAns == iTemp)
	{
	   printf("Given number is Palindrome Number");
	}
	else
	{
	  printf("Given Number is Not Palindrome Number");
	}
}

int main()
{
   int iValue=0;

   printf("Enter the Number:\n");
   scanf("%d",&iValue);

   CheckPalindrome(iValue);

	return 0;
}
