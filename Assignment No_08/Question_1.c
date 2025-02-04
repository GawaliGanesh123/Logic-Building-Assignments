/* Accept one number from user and check if number is greater than 100 or not.

Input- 117
Output- Number is Greater than 100

Input- 36
Output- Number is Less than 100

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckGreater(int iNo)
{

	if(iNo>100)
	{
	  return 1;
	}
	
	else
	{
	  return 0;
	}
}

int main()
{
	int iValue=0;
	bool bRet=false;

	printf("Enter the Number:");
	scanf("%d",&iValue);

    bRet=CheckGreater(iValue);

    if(bRet==1)
    {
      printf("Number is greater than 100\n");
    }
    else
    {
      printf("number is less than 100\n");
    }

    return 0;

}
